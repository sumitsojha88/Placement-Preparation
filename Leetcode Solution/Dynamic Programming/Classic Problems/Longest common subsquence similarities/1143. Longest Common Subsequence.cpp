
Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
Example 2:

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
Example 3:

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.




class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
            int m = text1.size();
            int n= text2.size();
            int dp[m+1][n+1];
            memset(dp,0,sizeof(dp));
            dp[0][0] = 0;
            for(int i=1;i<m+1;i++)
            {
                    for(int j=1;j<n+1;j++)
                    {
                            if(text1[i-1]==text2[j-1])
                        dp[i][j] = 1 + dp[i-1][j-1];  
                            else
                        dp[i][j] = max(dp[i][j-1],dp[i-1][j]);         
                    }
            }
         
        return dp[m][n];
          
    }
};
