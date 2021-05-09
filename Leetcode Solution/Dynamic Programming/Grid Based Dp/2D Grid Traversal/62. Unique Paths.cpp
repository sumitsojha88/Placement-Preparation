
Example 2:

Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
Example 3:

Input: m = 7, n = 3
Output: 28
Example 4:

Input: m = 3, n = 3
Output: 6
  

  
class Solution {
        
public:
    int uniquePaths(int A, int B) {
     
         int dp[A+1][B+1];
         memset(dp,0,sizeof(dp));
         for(int i=0;i<=B;i++)
            dp[1][i]=1;
            
         for(int i=0;i<=A;i++)
            dp[i][1]=1;

           for(int i=2;i<=A;i++)
           {
             for(int j=2;j<=B;j++)
             {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
             }
           }
            
                 return dp[A][B];
          }
    
};
