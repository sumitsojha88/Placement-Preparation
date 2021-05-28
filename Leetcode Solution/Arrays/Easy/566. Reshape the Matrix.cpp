
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
            
            vector<vector<int>> dp(r,vector<int> (c));
            vector<int> temp;
            int n=nums.size();
            int m=nums[0].size();
             if(n*m<r*c)
                    return nums;
            for(int i=0;i<nums.size();i++)
            {
                   for(int j=0;j<nums[0].size();j++)
                   {
                           temp.push_back(nums[i][j]);
                   }
            }
            int k=0;
            for(int i=0;i<r;i++)
            {
                   for(int j=0;j<c;j++)
                   {
                           dp[i][j] = temp[k++];
                   }
            }
           
            return dp;
        
    }
};
