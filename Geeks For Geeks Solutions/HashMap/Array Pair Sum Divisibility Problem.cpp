

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
ll sum=0;
ll count=0;
for(int i=0;i<n;i++)
{
 cin>>a[i];
 sum += a[i];
}
ll m;
cin>>m;
if(sum%2)
cout << "False" << endl;
else if(sum%m==0 && n%2==0)
cout  <<  "True" << endl;
else
cout << "False" << endl;


}
return 0 ;
}

