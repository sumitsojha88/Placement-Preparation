

// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
    int count=0;
    int maxi=0;
    stack<int> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        st.push(i);
        else if(st.size())
        {
            s[st.top()] = s[i] = '*';
            st.pop();
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*')
        count++;
        else
        {
            maxi = max(maxi,count);
            count=0;
        }
    }
    
    if(count>maxi)
    return count;
    else
    return maxi;
    
    
    
    
    
    
    
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
