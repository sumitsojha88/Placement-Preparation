


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         int count=0;
         unordered_map<int,int> mp;
         for(int i=0;i<n;i++)
         {
             int diff = k -arr[i];
             if(mp.find(diff)!=mp.end())
             {
                 count += mp[diff];
             }
             mp[arr[i]]++;
         }
         
         return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
