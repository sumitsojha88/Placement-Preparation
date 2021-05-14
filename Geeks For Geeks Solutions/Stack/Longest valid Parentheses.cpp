

#define ll long long int
#define pb push_back
#define  M 1000000007
#define fs for(int i=0;i<s.size();i++)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{

string s;
 cin>>s;
 int n = s.size();
ll sum=0;
ll count=0;
stack<int> st;
for(int i=0;i<n;i++)
{
  if(s[i]== '(')
  {
      st.push(i);
  }
  else if(st.size())
  {
      s[st.top()] = s[i] = '*' ;
      st.pop();
  }
}
for(int i=0;i<n;i++)
{
    if(s[i]=='*')
    {
    count++;
    }
    else
    {
        sum = max(sum,count);
        count=0;
    }
}
if(sum < count)
cout << count << endl;
else
cout << sum<< endl;
}
return 0 ;
}

