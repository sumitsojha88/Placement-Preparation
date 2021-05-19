
class Solution {
public:
    int maxOperations(vector<int>& nums, int target) {
            
            unordered_map<int,int> mp;
            int ans=0;
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                    if(mp[target-nums[i]]>0)
                    {
                            mp[target-nums[i]]--;
                            ans++;
                    }
                    else
                    mp[nums[i]]++;
            }
          
            return ans;
        
    }
};
