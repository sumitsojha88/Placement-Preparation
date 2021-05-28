
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
            
            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]==1)
                    {
                            if(count<k && i!=0)
                                    return false;
                            
                            count=0;
                            continue;
                    }
                    
                    count++;
            }
        
            return  true;
    }
};
