// Time complexity : O(N*(2^N))
// Space complexity : O(N*(2^N))

class Solution {
public:
        void backtrack(vector<int>& nums,vector<vector<int>>& ans,vector<int>& curr,int i,int n)
        {
               ans.push_back(curr);
                for(int j=i;j<n;j++)
                {
                        curr.push_back(nums[j]);
                         backtrack(nums,ans,curr,j+1,n);
                        curr.pop_back();          
                }        
        }
    vector<vector<int>> subsets(vector<int>& nums) {
            
            int n=nums.size();
            sort(nums.begin(),nums.end());
            vector<vector<int>> ans;
            vector<int> curr;
            backtrack(nums,ans,curr,0,n);
            return ans;    
    }
};
