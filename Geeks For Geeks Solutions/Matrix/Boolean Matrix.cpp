
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
int n,m;
cin>>n>>m;
 int a[n][m];
ll sum=0;
ll count=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
}
int b[n]={0};
int c[m]={0};
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j] == 1)
        {
            b[i] = 1;
            c[j] = 1;
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if( b[i] == 1 || c[j] == 1)
        {
            a[i][j] = 1;
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
}

}
return 0 ;
}

