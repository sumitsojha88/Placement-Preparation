Time: O(K * 9^K)
Space: O(K)

class Solution {
public:
        void backtrack(int k,int t,vector<vector<int>>& ans,vector<int>& curr,int sum,int i)
        {
              if(sum>t || curr.size()>k)
              {
                      return;
              }
                if(sum==t && curr.size()==k)
                {
                        ans.push_back(curr);
                }
                
                for(int j=i;j<10;j++)
                {
                        sum += j;
                        curr.push_back(j);
                        backtrack(k,t,ans,curr,sum,j+1);
                        sum -= j;
                        curr.pop_back();
                }
                
                
                
                
        }
    vector<vector<int>> combinationSum3(int k, int t) {
            
            vector<vector<int>> ans;
            vector<int> curr;
            int sum=0;
            backtrack(k,t,ans,curr,sum,1);
            return ans;
        
    }
};
