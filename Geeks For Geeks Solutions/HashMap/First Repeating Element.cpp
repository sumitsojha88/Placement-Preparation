

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
unordered_map<int,int> mp;
ll sum=-1;
bool flag = false;
ll count=0;
for(int i=0;i<n;i++)
{
 cin>>a[i];
 mp[a[i]]++;
}
for(int i=0;i<n;i++)
{
    if(mp[a[i]]!=1)
    {
        flag =true;
        cout << i+1 << endl;
        break;
    }
}
if(flag == false)
  cout << "-1" << endl;
  
  

}
return 0 ;
}
