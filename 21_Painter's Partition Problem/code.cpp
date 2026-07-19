#include<iostream>
#include<vector>
#include <climits>
using namespace std;

bool isPossible(vector<int>& arr,int N , int M, int maxAllocatedTime) // O(n)
{
    int painters = 1, time = 0;
    for(int i = 0; i < N ; i++)
    {
        if ( time + arr[i] <= maxAllocatedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return (painters <= M);
}

int partitionproblem(vector<int>& arr,int N,int M) // O(log(sum) * n)
{
    int sum = 0, maxVal = INT_MIN;
    for(int i = 0; i < N; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal, end = sum, ans = -1;
    
    while(st <= end) // O(log(sum) * n)
    {
        int mid = st + (end - st)/2;

        if(isPossible(arr,N,M,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
        
    }
    return ans;
}

int main()
{
    vector<int> arr = {40,30,10,20};
    int N = 4, M = 2;
    cout << partitionproblem(arr,N,M) << endl;
    return 0;
}