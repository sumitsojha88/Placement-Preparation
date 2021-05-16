
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
 ll a[n];
ll sum=n*(n+1)/2;
ll count=0;
for(int i=0;i<n-1;i++)
{
 cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
  sum -= a[i];
}
cout << sum<< endl;
}
return 0 ;
}
