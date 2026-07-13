#include<iostream>
#include<vector>
using namespace std;


int search(vector<int>& nums, int target, int st, int end)
{
    while(st <= end)
    {
        int mid = st + (end - st) / 2;
        if(nums[mid] == target)
            return mid;
        
        if(nums[st] <= nums[mid])
        {
            if(target >= nums[st] && target < nums[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else
        {
            if(target > nums[mid] && target <= nums[end])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {3,4,5,6,7,0,1,2};
    int target = 0;
    int st = 0, end = nums.size() - 1;
    
    cout << search(nums, target, st, end) << endl;
    return 0;
}