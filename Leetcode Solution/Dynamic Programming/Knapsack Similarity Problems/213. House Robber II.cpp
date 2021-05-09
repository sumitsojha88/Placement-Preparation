

Approach:-
  
similar to House robber I only difference is in this we have circular array means last element is neighbour of first and vice versa
If you havent solved house robber I ry to solve it.
We will use dp to solve this problem
After uderstanding problem we know we can either take first or last element
so we will take 2 cases first one being taking first and excluding last and solving like what we did in house robber I.
                        second one being taking last and maximum among them will be our answer 



Example 1:

Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
Example 2:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 3:

Input: nums = [0]
Output: 0
  

class Solution {
public:
    int rob(vector<int>& nums) {
            
            int n = nums.size();
            if(n==0) return 0;
            if(n==1) return nums[0];
            vector<int> dp(n+1,0);
            dp[0]=0;
            dp[1]=nums[1];
            for(int i=2;i<n;i++)
            {
               dp[i] = max(dp[i-1],dp[i-2]+nums[i]);     
            }
            
            int ansf = dp[n-1];
            
              vector<int> dps(n+1,0);
              dps[0]=nums[0];
              dps[1]=max(nums[0],nums[1]);
            
            for(int i=2;i<n-1;i++)
            {
               dps[i] = max(dps[i-1],dps[i-2]+nums[i]);     
            }
            
            int anss = dps[n-2];
            
            
            return max(ansf,anss);
            
    
    }
};
