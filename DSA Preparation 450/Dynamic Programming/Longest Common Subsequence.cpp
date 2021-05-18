
Example 1:

Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input Sequences
“ABCDGH” and “AEDFHR” is “ADH” of
length 3.
Example 2:

Input:
A = 3, B = 2
str1 = ABC
str2 = AC
Output: 2
Explanation: LCS of "ABC" and "AC" is
"AC" of length 2.
Your Task:
Complete the function lcs() which takes the length of two strings respectively and two strings as input parameters and returns the length of the longest subsequence present in both of them.

Expected Time Complexity : O(|str1|*|str2|)
Expected Auxiliary Space: O(|str1|*|str2|)

Constraints:
1<=size(str1),size(str2)<=103
  
  
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
 int ans=0;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         dp[i][j] = 0;
     }
 }
  for(int i=1;i<n+1;i++)
 {
     for(int j=1;j<m+1;j++)
     {
         if(s1[i-1]==s2[j-1])
         {
         dp[i][j] =  dp[i-1][j-1] + 1;
         if(dp[i][j] > ans)
         {
         ans = dp[i][j];
         }
         }
         else
         dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
     }
 }

cout << ans << endl;
}
return 0 ;
}
