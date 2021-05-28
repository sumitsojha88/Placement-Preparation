
class Solution {
        int m=1e9+7;
public:
    int numSubseq(vector<int>& nums, int t) {
            
            sort(nums.begin(),nums.end());
            int n=nums.size();
            int ans=0;
            int l=0;
            int r=n-1;
            vector<int> dp(n);
            dp[0]=1;
            for(int i=1;i<n;i++)
            {
                dp[i] = (dp[i-1]*2)%m;
            }
            
                while(l<=r)
                {
                        int sum = nums[l]+nums[r];
                        if(sum>t)
                        {
                                r--;
                        }
                        else
                        {
                                ans = (ans + dp[r-l])%m;
                                l++;
                        }
                }
            
            
            return ans;
        
    }
};
