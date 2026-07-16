#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int>& arr, int st, int end)
{
    int mid = st + (end - st )/2;
    if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid+1])
    {
        return mid;
    }
    else if (arr[mid] < arr[mid + 1])
    {
        return peak(arr, mid +1 , end);
    }
    else
    {
        return peak(arr, st, mid -1);
    }
}
int main()
{
    vector<int> arr = {0,3,8,9,5,2};

    cout << peak (arr, 1, arr.size()-2) << endl;
    return 0;
}