// Optimal Approch (2 pointer)

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height)
{
    int n = height.size();
    int maxWater = 0;
    int Left = 0;
    int right = n-1;
    while (Left < right)
    {
        int width = right - Left;
        int minHeight = min(height[Left],height[right]);
        int area = width * minHeight;
        maxWater = max(maxWater , area);
        height[Left] < height[right] ? Left++ : right--;
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum water container can store is: " << maxArea(height) << endl;

}