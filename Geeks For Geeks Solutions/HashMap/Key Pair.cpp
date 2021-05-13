
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	     unordered_set<int> mp;
	     for(int i=0;i<n;i++)
	     {
	         int diff = x - arr[i];
	         if(mp.find(diff)!=mp.end())
	         {
	             return true;
	         }
	         
	         mp.insert(arr[i]);
	     }
	     
	     return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
  // } Driver Code Ends
