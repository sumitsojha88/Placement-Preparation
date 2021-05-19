
class Solution {
public:
    int findMin(vector<int>& nums) {
            
            
            int i=0;
            int n=nums.size();
            if(nums[0]<nums[n-1]) return nums[0];
            int j=n-1;
            
            while(i<=j)
            {
                     if(nums[i]<=nums[j]) 
                             return nums[i];
                    int m = i + (j-i)/2;
                    
                   
                    if(nums[m]<=nums[(m+1)%n] && nums[m]<=nums[(m-1+n)%n])
                    {
                            return nums[m];
                    }
                    else if(nums[i]<=nums[m])
                    {
                            i = m + 1;
                    }
                    else if(nums[j]>=nums[m])
                    {
                            j = m  -1;
                    }
            }
        
            
            return -1;
    }
};
