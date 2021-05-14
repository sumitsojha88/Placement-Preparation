

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
vector<ll> v;
stack<ll> s;
for(int i=0;i<n;i++)
{
 cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(s.size()==0)
    {
        v.push_back(-1);
    }
    else if(s.size()>0 && s.top() < a[i])
    {
        v.push_back(s.top());
    }
    else if(s.size() > 0 && s.top() >= a[i])
    {
        while(s.size() > 0 && s.top() >= a[i])
        {
            s.pop();
        }
        if(s.size() > 0)
        v.push_back(s.top());
        else
        v.push_back(-1);
    }
    s.push(a[i]);
}

for(int i=0;i<n;i++)
{
    cout << v[i] << " " ;
}
cout << endl;
}
return 0 ;
}
