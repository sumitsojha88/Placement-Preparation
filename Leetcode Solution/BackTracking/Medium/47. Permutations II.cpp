
Idea:
While swapping, avoid duplicates. I.e avoid swapping the same number



class Solution {
public:
     void backtrack(vector<int> nums,vector<vector<int>>& ans,int i,int n)
      {
              if(i==nums.size())
              {
                      ans.push_back(nums);
                      return;
                      
              }
              for(int j=i;j<nums.size();j++)
              {
                      if(i!=j && nums[j]==nums[i])
                      {
                             continue;
                      }
                      swap(nums[i],nums[j]);
                      backtrack(nums,ans,i+1,n);
                     // swap(nums[j],nums[i]);       
              }
      }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
            
            int n=nums.size();
            sort(nums.begin(),nums.end());
            vector<vector<int>> ans;
            backtrack(nums,ans,0,n);
            return ans;
        
    }
};
