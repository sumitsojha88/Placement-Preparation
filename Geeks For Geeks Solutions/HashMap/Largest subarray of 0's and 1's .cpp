#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << maxLen(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
int maxLen(int arr[], int N)
{
    for(int i=0;i<N;i++)
    {
        if(arr[i]==0)
        {
            arr[i] = -1 ;
        }
    }
   int maxi=0;
   int sum=0;
   int count=0;
   unordered_map<int,int> mp;
   for(int i=0;i<N;i++)
   {
       sum += arr[i];
       if(sum == 0)
       {
           maxi = max(maxi,i+1);
       }
       if(mp.find(sum)!=mp.end()){
           maxi = max(maxi,i-mp[sum]);
       }
       else
       {
           mp[sum]=i;
       }
     
   }
   return maxi;
}
