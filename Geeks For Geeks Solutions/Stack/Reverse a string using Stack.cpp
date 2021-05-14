

#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends


void reverse(char *str, int len)
{

 stack<char> st;
 for(int i=0;i<len;i++)
 {
     st.push(str[i]);
     
 }
 string ans="";
 
int i=0;
 while(!st.empty())
 {
     str[i++] = st.top();
     st.pop();
 }
 
 
 
}
