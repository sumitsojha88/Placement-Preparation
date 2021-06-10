

class Solution {
public:
        void backtrack(vector<int>& a,int t,int n,vector<vector<int>>& ans,vector<int>& curr,int sum,int i)
        {
                if(sum>t)
                {
                        return ;
                }
                if(sum==t)
                {
                        ans.push_back(curr);                       
                }
                for(int j=i;j<n;j++)
                {
                        sum += a[j];
                        curr.push_back(a[j]);
                        backtrack(a,t,n,ans,curr,sum,j);
                        sum -= a[j];
                        curr.pop_back();
                }
                    
        }   
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
            sort(a.begin(),a.end());
            int n=a.size();
            vector<vector<int>> ans;
            vector<int> curr;
            int sum=0;
            backtrack(a,t,n,ans,curr,sum,0);
            
            return ans;
        
    }
};
