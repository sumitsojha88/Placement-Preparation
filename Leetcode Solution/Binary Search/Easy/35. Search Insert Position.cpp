

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
            
            int i=0;
            int j=nums.size()-1;
            int n=nums.size();
            if(nums[n-1]<target)
            {
                    return n;
            }
            if(nums[0]>target)
            {
                    return 0;
            }
            int ans;
            while(i<=j)
            {
                    int m=(i-(i-j)/2);
                    if(nums[m]==target)
                    {
                            return m;
                    }
                    else if(nums[m]>target)
                    {
                            j = m-1;
                    }
                    else
                    {
                           
                            i = m+1;     
                    }
                    
            }
            
            
            
            
            return i;
    }
};
