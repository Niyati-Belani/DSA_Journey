#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int st=0, end=arr.size()-1;
    while(st <= end)
    {
        int mid = (st + end)/2;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            st = mid+1;
        }
        else
        {
            return mid;
        }
    }

    return -1;

}
int main()
{
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int target1 = -1;
    cout << binarySearch (arr1,target1) << endl;
    cout << "--------------------" << endl;
    vector<int> arr2 = {2,5,9,11,16,20};
    int target2 = 20;
    cout << binarySearch (arr2,target2) << endl;
}
