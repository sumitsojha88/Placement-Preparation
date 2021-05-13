


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
 string t;
 cin>>t;

unordered_map<char, int>m;
        int i = 0, j = 0, count = 0, minLen = INT_MAX;
        string res = "";
        for(auto x: t) m[x]++, count++;
        while(j < s.size()){
            if(m[s[j++]]-- > 0) count--;
            if(count == 0){
                while(m[s[i]] < 0) m[s[i++]]++;
                int len = j - i;
                if(len < minLen){
                    minLen = len;
                    res = s.substr(i, len);
                }
                m[s[i++]]++;
                count++;
            }
        }
if(minLen == INT_MAX)
cout << "-1" << endl;
else

cout << res << endl;

}
return 0 ;
}
