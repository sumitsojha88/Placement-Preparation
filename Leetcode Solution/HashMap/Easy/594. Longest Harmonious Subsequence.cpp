
Ques link:https://leetcode.com/problems/longest-harmonious-subsequence/

class Solution {
public:
    int findLHS(vector<int>& nums) {
            
            unordered_map<int,int> mp;
            int ans=0;
            for(int i=0;i<nums.size();i++)
            {
                    mp[nums[i]]++;
                    
                   int sum =0 ;
                    if(mp[nums[i]] && mp[nums[i]-1])
                    {
                           sum = max(sum,mp[nums[i]] + mp[nums[i]-1]); 
                    }
                    if(mp[nums[i]] && mp[nums[i]+1])
                    {
                           sum = max(sum,mp[nums[i]] + mp[nums[i]+1]); 
                    }
             
                   ans = max(ans,sum);
            }
            
            
            return ans;
        
    }
};
