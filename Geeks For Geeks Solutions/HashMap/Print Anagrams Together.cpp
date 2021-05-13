

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

ll sum=0;
ll count=0;
map<string,int> mp;
vector<int> v;
vector<string> vec;
for(int i=0;i<n;i++)
{
    string x;
    cin>>x;
  vec.push_back(x);
 sort(vec[i].begin(),vec[i].end());
 mp[vec[i]]++;
}

for(auto& el:mp)
{
    v.push_back(el.second);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
  cout << v[i] << " " ;
}
cout << endl;

}
return 0 ;
}

