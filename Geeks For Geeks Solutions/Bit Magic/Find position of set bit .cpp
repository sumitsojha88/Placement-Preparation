
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N) {
        int count=0;
        int ans=0;
        int res;
        while(N)
        {
            if(N&1)
            {
            ans++;
            res = count + 1;
            }
            
            
            count++;
            
            N = N/2;
            
        }
        if(ans==0 || ans>1)
        return -1;
        else
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
