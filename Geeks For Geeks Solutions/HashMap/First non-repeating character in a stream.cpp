

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
int n;
cin>>n;
 char a[n];

for(int i=0;i<n;i++)
{
 cin>>a[i];
}
unordered_map<char,int> mp;
queue<char> q;
for(int i=0;i<n;i++)
{
    mp[a[i]]++;
    q.push(a[i]);
    while(!q.empty() && mp[q.front()]>1)
    q.pop();
    if(!q.empty())
    cout << q.front() << " " ;
    else
    cout << "-1" << " " ; 
}

cout << endl;
}
return 0 ;
}
