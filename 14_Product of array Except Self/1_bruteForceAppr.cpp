#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();

    vector<int> ans(n);

    for(int i = 0; i <n; i++)
    {
        int product = 1;
        for(int j = 0; j < n; j++)
        {
            if(j != i)
            {
                product *= nums[j];
            }
        }
        ans[i]=product;
    }
    cout << "Product of array except self is: ";
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}