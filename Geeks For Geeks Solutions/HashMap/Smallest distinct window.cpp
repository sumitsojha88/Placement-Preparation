

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
string s;
 cin>>s;
 int n=s.size();
 int diffchar =0;
 bool visited[256]={false};
for(int i=0;i<n;i++)
{
 if(visited[s[i]]==false)
 {
     visited[s[i]]=true;
     diffchar++;
 }
}
int len=INT_MAX;
int start=0;
int sindex=-1;
int currchar[256]={0};
int count=0;
for(int i=0;i<n;i++)
{
    currchar[s[i]]++;
    
    if(currchar[s[i]]==1)
    count++;
    
    if(count==diffchar)
    {
        while(currchar[s[start]]>1)
        {
            if(currchar[s[start]]>1)
            {
               currchar[s[start]]--; 
            }
            start++;
        }
        int lengthwindow = i - start +1;
    if(lengthwindow<len)
    {
        len = lengthwindow;
    }
    }
    
    
}
cout << len << endl;

}
return 0 ;
}

