
Exampel 1:

Input: str = "axxxy"
Output: 2
Explanation: The longest repeating subsequenece
is "xx".
Example 2:

Input: str = "aab"
output: 1
Explanation: The longest reapting subsequenece
is "a".
 

Your Task:
You don't need to read or print anything. Your task is to complete the function LongestRepeatingSubsequence() which takes str as input parameter and returns the length of the longest repeating subsequnece.
 

Expected Time Complexity: O(n2)
Expected Space Complexity: O(n2)
 

Constraints:
1 <= |str| <= 500

 using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int dp[n+1][n+1];
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0 || j==0)
	            dp[i][j] = 0;
	            else if(s[i-1]==s[j-1] && i!=j)
	            dp[i][j] =  1 + dp[i-1][j-1];
	            else
	            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    
	    cout << dp[n][n] << endl;
	}
	return 0;
}
