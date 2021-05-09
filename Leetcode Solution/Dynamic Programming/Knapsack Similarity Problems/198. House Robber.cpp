
Approach:

we will use dp to solve above problem
we cant take 2 neighbour house so we will use dp to  calculate sum upto that index and find which one maximum   dp[i-2]+num[i] or dp[i-1].
  




Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
             Total amount you can rob = 2 + 9 + 1 = 12.
 

Constraints:

0 <= nums.length <= 100
0 <= nums[i] <= 400






class Solution {
public:
    int rob(vector<int>& num) {
            
            
           
        
           int n = num.size();
            if(n==0) return 0;
            if(n==1) return num[0];
            vector<int> dp(n+1,0);
            dp[0]=num[0];
            dp[1]=max(num[0],num[1]);
            for(int i=2;i<n;i++)
            {
                   dp[i] = max(dp[i-2]+num[i],dp[i-1]);
            }
            
            
            return dp[n-1];
    }
};
