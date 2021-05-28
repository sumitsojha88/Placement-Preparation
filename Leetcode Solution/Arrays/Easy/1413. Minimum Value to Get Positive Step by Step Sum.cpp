
class Solution {
public:
    int minStartValue(vector<int>& nums) {
            
            int mini=INT_MAX;
            int sum=0;
            int n= nums.size();
            for(int i=0;i<n;i++)
            {
                 sum +=  nums[i];
                    mini = min(sum,mini);
            }   
            
            if(mini<0)
            return abs(mini) + 1;
            else
            return 1;

        
    }
};
