
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
            int n=nums.size();
            int count=0;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                     count=0;
                    while(nums[i])
                    {
                            count++;
                 nums[i]=nums[i]/10;
                    
                    }
                    if(count%2==0)
                    {      sum++;
                    }
                    
            }
            
            return sum;
    }
};
