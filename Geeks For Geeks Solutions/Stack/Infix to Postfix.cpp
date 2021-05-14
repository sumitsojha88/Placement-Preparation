

#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
    return 3;
    if(c=='*' || c=='/')
    return 2;
    if(c=='+' || c=='-')
    return 1;
    else
    return -1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     string s;
     cin>>s;
     stack<char> st;
     st.push('N');
     string ans;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]>='a' && s[i]<='z' ||s[i]>='A' && s[i]<='Z')
         ans += s[i];
         
         else if(s[i]=='(')
         st.push(s[i]);
         
         else if(s[i]==')')
         {
         while(st.top()!='N' && st.top()!='(')
         {
             char c = st.top();
             st.pop();
             ans += c;
         }
         if(st.top()=='(')
         {
             st.pop();
         }
         }
         
         else
         {
             while(st.top()!='N' && prec(s[i])<=prec(st.top()))
             {
                 char c = st.top();
                 st.pop();
                 ans += c;
             }
             st.push(s[i]);
         }
         
     }
     while(st.top()!='N')
     {
         char c=st.top();
         st.pop();
         ans += c;
     }
     
     
     cout << ans << endl;
     
 }
	return 0;
}
