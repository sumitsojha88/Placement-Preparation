


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
vector<ll> v;
stack<pair<ll,ll>> s;
for(ll i=0;i<n;i++)
{
 cin>>a[i];
}
for(ll i=0;i<n;i++)
{
    if(s.size()==0)
    {
        v.push_back(-1);
    }
    else if(s.size()>0 && s.top().first > a[i])
    {
        v.push_back(s.top().second);
    }
    else if(s.size()>0 && s.top().first <= a[i])
    {
        while(s.size()>0 && s.top().first <= a[i])
        {
            s.pop();
        }
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else
        {
             v.push_back(s.top().second);
        }
    }
    s.push({a[i],i});
}
for(int i=0;i<n;i++)
{
    cout << abs(i-v[i]) << " " ;
}

cout << endl;
}
return 0 ;
}
