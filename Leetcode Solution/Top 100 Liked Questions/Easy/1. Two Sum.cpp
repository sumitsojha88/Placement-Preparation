
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int sum) {
            
            unordered_map<int,int> mp;
            vector<int> ans;
            for(int i=0;i<nums.size();i++)
            {
                    if(mp[sum-nums[i]])
                    {
                            ans.push_back(i);
                            ans.push_back(mp[sum-nums[i]]-1);
                            
                            return ans;
                    }
                    
                    
                    mp[nums[i]] = i+1;
            }
            
            return ans;
        
    }
};
