

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
}
unordered_map<int,int> mp;
for(int i=0;i<n;i++)
{
    if(a[i]==0)
    count = 1;
}
for(int i=0;i<n;i++)
{
    sum += a[i];
    if(sum == 0)
    {
        count = 1;
        break;
    }
    else
    {
        if(mp.find(sum)==mp.end())
        {
            mp[sum]++;
        }
        else
        {
            count = 1;
            break;
        }
    }
}
if(count)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
return 0 ;
}
