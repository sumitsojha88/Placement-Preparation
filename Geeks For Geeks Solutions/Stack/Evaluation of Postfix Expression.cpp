

// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    stack<int> st;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {
            int f=st.top();
            st.pop();
            int s = st.top();
            st.pop();
            if(str[i]=='+')
            st.push(f+s);
            else if(str[i]=='-')
            st.push(s-f);
            else if(str[i]=='*')
            st.push(f*s);
            else if(str[i]=='/')
            st.push(s/f);
        }
        else
        {
            st.push(str[i]-'0');
        }
    }
    
    int ans = st.top();
    st.pop();
    return ans;
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
