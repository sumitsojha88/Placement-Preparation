

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
ll m,n;
cin>>m>>n;

 ll a[m][n];
ll sum=0;
ll count=0;
for(int i=0;i<m;i++)
{
 for(int j=0;j<n;j++)
 {
     cin>>a[i][j] ;
 }
}
ll x;
cin>>x;
int l=0;
int r=n-1;
int f=0;
int small = a[0][0];
int large = a[m-1][n-1];
if(small > x || large < x)
{
    cout << "0" << endl ;
}
else
{ 
while(l<=m-1 && r>=0)
{
    if(x == a[l][r])
    {
    f=1;
    break;
    }
     if(x < a[l][r])
    r--;
     if(x > a[l][r])
    l++;
}
if(f)
cout << "1" << endl;
else
cout << "0" << endl ;
}




}
return 0 ;
}
