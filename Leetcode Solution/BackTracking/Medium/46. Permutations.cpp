Time Complexity :- O(N!)


class Solution {
public:
        void backtrack(vector<int>& nums,vector<vector<int>>& ans,int i,int n)
        {
                if(i==n)
                {
                    ans.push_back(nums);
                        return;
                }
                
                for(int j=i;j<nums.size();j++)
                {
                        swap(nums[i],nums[j]);
                        backtrack(nums,ans,i+1,n);
                        swap(nums[i],nums[j]);
                }
                
                
        }
    vector<vector<int>> permute(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            vector<vector<int>> ans;
            vector<int > curr;
            backtrack(nums,ans,0,n);
            
            return ans;
        
    }
};
