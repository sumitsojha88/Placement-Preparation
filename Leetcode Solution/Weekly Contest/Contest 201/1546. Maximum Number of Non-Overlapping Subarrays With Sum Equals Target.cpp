
class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int t) {
            
            unordered_map<int,int> mp;
             unordered_map<int,int> mpp;
            vector<int> dp;
            int n=nums.size();
            int sum=0;
            int ans=0;
            mp[0] = 0;
             for(int i=0;i<n;i++)
            {
                     sum += nums[i];
                     if(mp.find(sum-t)!=mp.end())
                     {
                           ans = max(ans,mp[sum-t]+1);   
                     }
                      
                     mp[sum] = ans;
                    
            }
          
            return ans;
        
    }
};
