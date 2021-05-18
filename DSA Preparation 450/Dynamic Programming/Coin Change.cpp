
Example 1:

Input:
n = 4 , m = 3
S[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.

â€‹Example 2:

Input:
n = 10 , m = 4
S[] ={2,5,3,6}
Output: 5
Explanation: Five Possible ways are:
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} 
and {5,5}.
  
  
  Expected Time Complexity: O(m*n).
Expected Auxiliary Space: O(n). 
  
  
  class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        vector<vector<long long int>> dp(m+1,vector<long long int> (n+1));
        for(int i=0;i<=m;i++)
        {
            dp[i][0] = 1 ;
        }
        for(int i=0;i<=n;i++)
        {
            dp[0][i] = 0;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j>=S[i-1])
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
                }
                else
                {
                     dp[i][j] = dp[i-1][j] ;
                }
            }
        }
        
        
        return dp[m][n];
    }
};
