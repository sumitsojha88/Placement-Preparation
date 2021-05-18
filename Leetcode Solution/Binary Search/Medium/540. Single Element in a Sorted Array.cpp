
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            
            int i=0;
            int j=nums.size()-1;
            while(i<=j)
            {
                   int mid = i + (j-i)/2;
                   if(i==j)
                   {
                           return nums[i];
                   }
                   if(mid%2==0)
                   {
                           if(nums[mid]==nums[mid+1])
                           {
                               i = mid +1;     
                           }
                           else
                           {
                                   j = mid;
                           }
                   }
                    else
                    {
                            if(nums[mid]==nums[mid-1])
                            {
                                 i = mid + 1;   
                            }
                            else
                            {
                                    j = mid;
                            }
                    }
            }
        
            
            return nums[i];
    }
};
