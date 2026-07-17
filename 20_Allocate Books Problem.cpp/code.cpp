#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& arr,int n, int m, int maxAllowedPages) // O(n)
{
    int stds = 1;
    int pages= 0;

    for(int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
           return false;
        }
        if(pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            stds++;
            pages = arr[i];
        }
    }

    return stds > m ? false : true;
}

int allocateBook(vector<int>& arr,int n, int m)  // O(logN * n)
{
    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    for(int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum; // range of possible ans

    while (st <= end) // O(logN * n)
    {
        int mid = st + (end - st)/2;

        if (isValid(arr,n,m,mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else  // right
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,1,3,4}; // 6
    int n = 4;
    int m = 2;

    cout << allocateBook(arr,n,m) << endl;
}