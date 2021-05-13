

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
ll n;
cin>>n;
string s;
 cin>>s;
ll sum=0;
ll count=0;
string ans = "-1";
int hash[26]={0};
for(int i=0;i<n;i++)
{
  hash[s[i]-'a']++;
}
for(int i=0;i<n;i++)
{
  if(hash[s[i]-'a'] == 1 )
  {
      ans = s[i];
      break;
  }
}
cout << ans << endl;

}
return 0 ;
}

