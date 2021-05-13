

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
ll n,m;
cin>>n>>m;
 ll a[n];
 ll b[m];
ll sum=0;
ll count=0;
unordered_map<int,int> mp;
for(int i=0;i<n;i++)
{
 cin>>a[i];
 mp[a[i]]++;
 
}
for(int i=0;i<m;i++)
{
 cin>>b[i];
 if(mp[b[i]])
 {
 count++;
 mp[b[i]] = 0;
 }
}

cout << count << endl;

}
return 0 ;
}
