

Example 1:

Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
Example 2:

Input:
N = 3
W = 3
values[] = {1,2,3}
weight[] = {4,5,6}
Output: 0
Your Task:
Complete the function knapSack() which takes maximum capacity W, weight array wt[], value array val[] and number of items n as a parameter and returns the maximum possible value you can get.

Expected Time Complexity: O(N*W).
Expected Auxiliary Space: O(N*W)

Constraints:
1 ≤ N ≤ 1000
1 ≤ W ≤ 1000
1 ≤ wt[i] ≤ 1000
1 ≤ v[i] ≤ 1000
  
  
  
  class Solution{
    public:
    // Returns the maximum value that  
    // can be put in a knapsack of capacity W 
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int dp[n+1][W+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(i==0 || j==0)
                dp[i][j] = 0;
                else if(wt[i-1]<=j)
                {
                    dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        
        return dp[n][W];
    }
};
