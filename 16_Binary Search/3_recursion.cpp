#include <iostream>
#include <vector>
using namespace std;

int bsr(vector<int> arr, int tar, int st, int end)
{
    int mid = st + (end-st)/2;
    if(tar > arr[mid])
    {
        return bsr(arr, tar, mid+1,end);
    }
    else if (tar < arr[mid])
    {
        return bsr(arr,tar,st,mid-1);
    }
    else
    {
        return mid;
    }
}
int main()
{
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int target1 = 0, st1 = 0, end1 = arr1.size()-1;
    cout << bsr (arr1,target1,st1,end1) << endl;

    cout << "--------------------" << endl;

    vector<int> arr2 = {2,5,9,11,16,20};
    int target2 = 16 ,st2 = 0, end2 = arr2.size()-1;
    cout << bsr (arr2,target2,st2,end2) << endl;
}

