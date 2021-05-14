

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
vector<ll> right;
stack<pair<ll,ll>> s;
ll index=n;
for(int i=n-1;i>=0;i--)
{
    if(s.size()==0)
    {
        right.push_back(index);
    }
    else if(s.size() > 0 && s.top().first < a[i])
    {
        right.push_back(s.top().second);
    }
     else if(s.size() > 0 && s.top().first >= a[i])
    {
        while(s.size() > 0 && s.top().first >= a[i])
        {
            s.pop();
        }
        if(s.size() > 0)
        right.push_back(s.top().second);
        else
        right.push_back(index);
    }
     s.push({a[i],i});
}
reverse(right.begin(),right.end());
vector<ll> left;
stack<pair<ll,ll>> s2;
ll index2=-1;
for(int i=0;i<n;i++)
{
    if(s2.size()==0)
    {
        left.push_back(index2);
    }
    else if(s2.size() > 0 && s2.top().first < a[i])
    {
        left.push_back(s2.top().second);
    }
     else if(s2.size() > 0 && s2.top().first >= a[i])
    {
        while(s2.size() > 0 && s2.top().first >= a[i])
        {
            s2.pop();
        }
        if(s2.size() > 0)
        left.push_back(s2.top().second);
        else
        left.push_back(index2);
    }
     s2.push({a[i],i});
}

ll width[n];
ll maxi=0;
for(int i=0;i<n;i++)
{
    width[i]= right[i] - left[i] - 1; 
    maxi = max(maxi,width[i]*a[i]);
     
}
cout << maxi << endl;

}
return 0 ;
}
