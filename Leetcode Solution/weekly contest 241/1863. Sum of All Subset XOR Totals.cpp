


class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
            
            int sum=0;
           for(int i=0;i<nums.size();i++)
           {
                   sum |= nums[i];
           }
            
            int ans = sum*pow(2,nums.size()-1);
            
            return ans;
        
    }
};
