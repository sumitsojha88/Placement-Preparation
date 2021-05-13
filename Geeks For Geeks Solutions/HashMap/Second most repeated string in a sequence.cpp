
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

ll sum=0;
ll count=0;
vector<string> vec;
unordered_map<string,int> mp;
for(int i=0;i<n;i++)
{
  cin>>s;
  vec.push_back(s);
  mp[vec[i]]++;
}
string ans;
int maxans = 0;
string ans2;
int maxans2 = 0;
for(int i=0;i<n;i++)
{
  if(mp[vec[i]] > maxans )
  {
      ans = vec[i];
      maxans = mp[vec[i]];
  }
}
for(int i=0;i<n;i++)
{
  if(mp[vec[i]] > maxans2 && mp[vec[i]]!=maxans)
  {
      ans2 = vec[i];
      maxans2 = mp[vec[i]];
  }
}
cout << ans2 << endl;

}
return 0 ;
}

