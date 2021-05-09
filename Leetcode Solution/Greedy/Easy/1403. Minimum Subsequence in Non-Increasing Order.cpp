class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
            
            sort(nums.begin(),nums.end());
            vector<int> ans;
            int sum=0;
            int sum1=0;
            for(int i=0;i<nums.size();i++)
            {
                sum += nums[i];    
            }
            for(int i=nums.size()-1;i>=0;i--)
            {      
             sum -= nums[i];
             sum1 += nums[i];
             ans.push_back(nums[i]);
              if(sum<sum1)
              {
                        break;
              }
            }
            
            
            return ans;
        
    }
};
