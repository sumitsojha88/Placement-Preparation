
Example 1:

Input:
N=3,  K=2 
Output: 6
Explanation: We have following possible combinations:
 

Example 2:

Input:
N=2,  K=4
Output: 16

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countWays() that takes n and k as parameters and returns the number of ways in which the fence can be painted.(modulo 109 + 7)

 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

 

Constraints:
1 ≤ N ≤ 105
1 ≤ K ≤ 100





class Solution{
    public:
    long long countWays(int n, int k){
        
       long long int dp[n+1];
        dp[1]=k;
        dp[2]=k+k*(k-1);
        for(int i=3;i<=n;i++)
        {
            dp[i] = ((k-1)*(dp[i-1]+dp[i-2]))%1000000007;
        }
        
        return dp[n]%1000000007;
    }
};

