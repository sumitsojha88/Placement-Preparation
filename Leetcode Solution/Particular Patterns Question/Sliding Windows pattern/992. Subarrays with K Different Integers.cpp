
class Solution {
public:
        int solve(vector<int>& nums,int k)
        {
             int n=nums.size();
            unordered_map<int,int> mp;
            int i=0;
            int j=0;
            int count=0;
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    mp[nums[i]]++;
                    while(j<n && mp.size()>k)
                    {
                            mp[nums[j]]--;
                            if(mp[nums[j]]==0)
                            {
                                    mp.erase(nums[j]);
                            }
                            j++;
                    }
                    
                    ans += i-j+1;
            } 
                
                return ans;
        }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
            
        return solve(nums,k)-solve(nums,k-1);   
        
    }
};
