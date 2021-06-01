
class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
            
            int n=nums.size();
            int j=0;
            int sum=0;
            int ans=INT_MAX;
            bool flag = true;
            for(int i=0;i<n;i++)
            {
                    sum += nums[i];
                    while(j<n && sum>=t)
                    {
                            flag = false;
                            ans = min(ans,i-j+1);
                            sum -= nums[j++];
                    }
            }
            
            if(!flag)
                    return ans;
            else
                    return 0; 
         
        
    }
};
