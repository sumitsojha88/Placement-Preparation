time complexity = O(n^k)

class Solution {
public:
        void backtrack(vector<int>& curr,vector<vector<int>>& ans,int k,int i,int n)
        {
             if(curr.size()==k)
             {
                     ans.push_back(curr);
                     return;
             }
                
                for(int j=i;j<=n;j++)
                {
                        curr.push_back(j);
                        backtrack(curr,ans,k,j+1,n);
                        curr.pop_back();     
                }
            
        }
    vector<vector<int>> combine(int n, int k) {
            vector<vector<int>> ans;
            vector<int> curr;
            
            backtrack(curr,ans,k,1,n);
            return ans;
        
    }
};
