

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
 int a[n];
unordered_set<int> s;
int maxi=0;
ll count=0;
for(int i=0;i<n;i++)
{
 cin>>a[i];
 s.insert(a[i]);
}
for(int i=0;i<n;i++)
{
    if(s.find(a[i]-1)==s.end())
    {
        int j= a[i];
        while(s.find(j)!=s.end())
        {
            j++;
            maxi = max(maxi,j-a[i]);
        }
    }
}
cout << maxi << endl;
}
return 0 ;
}

