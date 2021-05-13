
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
 ll n;
cin>>n;
unordered_map<char,int> mp;
int m = s.size();
int j=0;
int ans=0;

for(int i=0;i<m;i++)
{
  mp[s[i]]++;
  if(mp.size()==n)
  {
      ans = max(ans,i-j+1);
  }
 else  if(mp.size()>n)
  {
      mp[s[j]]--;
      if(mp[s[j]]==0)
      {
          mp.erase(s[j]);
          ans = max(ans,i-j);
      }
      j++;
  }
}
if(ans==0)
cout << -1 << endl;
else
cout << ans << endl;
}
return 0 ;
}
