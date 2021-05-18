
Example 1:

Input: 
s = "geek", t = "gesek"
Output: 1
Explanation: One operation is required 
inserting 's' between two 'e's of str1.
Example 2:

Input : 
s = "gfg", t = "gfg"
Output: 
0
Explanation: Both strings are same.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation required to make both strings equal. 

 

Expected Time Complexity: O(|s|*|t|)
Expected Space Complexity: O(|s|*|t|)


Constraints:
1 <= Length of both strings <= 100
Both the strings are in lowercase.
  
  
  
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
ll n,m;
cin>>n>>m;
string s1,s2;
 cin>>s1>>s2;
int dp[n+1][m+1];
for(int i=0;i<n+1;i++)
{
for(int j=0;j<m+1;j++)
{
    if(i==0 && j==0)
    dp[i][j] = 0;
    else if(i==0)
    dp[i][j] = 1 + dp[i][j-1];
    else if(j==0)
    dp[i][j] = 1 + dp[i-1][j];
    else
    {
        if(s1[i-1]==s2[j-1])
        dp[i][j] = dp[i-1][j-1];
        else
        dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
    }
}
}
cout << dp[n][m] << endl;

}
return 0 ;
}
