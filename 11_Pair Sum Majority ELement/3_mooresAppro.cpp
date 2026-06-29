#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else {
            freq--;
        }
    }

    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }

    if (count > nums.size()/2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
    return ans;
}

int main()
{
    vector<int> nums = { 3, 2, 3};
    cout << majorityElement(nums) << endl;
    return 0;
}