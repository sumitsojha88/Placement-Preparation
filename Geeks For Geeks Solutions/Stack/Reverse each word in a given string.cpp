

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
ll sum=0;
ll count=0;
string temp= "" ;
string ans = "" ;
for(int i=0;i<s.size();i++)
{
 if(s[i]!= '.')
 {
     temp += s[i];
 }
 else
 {
     reverse(temp.begin(),temp.end());
     
     ans += temp;
     ans += "." ;
     temp = "" ;
     
 }
}
reverse(temp.begin(),temp.end());
 ans += temp ;
cout << ans << endl;

}
return 0 ;
}
