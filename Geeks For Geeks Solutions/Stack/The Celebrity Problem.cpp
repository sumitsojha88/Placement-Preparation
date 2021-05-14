

//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        while(st.size()>=2)
        {
            int f=st.top();
            st.pop();
            int s=st.top();
            st.pop();
            if(M[f][s]==1)
            {
                st.push(s);
            }
            else
            {
                st.push(f);
            }
        }
        int ans = st.top();
        st.pop();
        for(int i=0;i<n;i++)
        {
            if(i!=ans)
            {
            if(M[i][ans]==0 || M[ans][i]==1)
            return -1;
            }
        }
        
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
