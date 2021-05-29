
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
            
            int n=nums.size();
            int m=n-1;
           
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    int j= abs(nums[i])- 1;
                  nums[j] *= -1;
                    
                    if(nums[j]>0) 
                            return abs(nums[i]);
                    
            }
            
            return -1;
    }
};
