

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            
            int i=0;
            int n=nums.size();
            int j=n-1;
            int count=0;
            while(i<=j)
            {
                  if(nums[i]==val)
                  {
                          swap(nums[i],nums[j]);
                          count++;
                          j--;
                  }
                    else
                    {
                            i++;
                    }
            }
            
            return n-count;
            
            
        
    }
};
