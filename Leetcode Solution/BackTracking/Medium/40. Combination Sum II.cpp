Same as Combination sum but change in only one condition
if(j>i && a[j]==a[j-1])  // condition 
 {continue; }

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
                        return ;
                }
                for(int j=i;j<n;j++)
                {
                        if(j>i && a[j]==a[j-1])  // condition 
                        {
                                continue;
                        }
                        sum += a[j];
                        curr.push_back(a[j]);
                        backtrack(a,t,n,ans,curr,sum,j+1);  
                        sum -= a[j];
                        curr.pop_back();
                }              
        } 
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
            sort(a.begin(),a.end());
            int n=a.size();
            vector<vector<int>> ans;
            vector<int> curr;
            int sum=0;
            backtrack(a,t,n,ans,curr,sum,0);
            return ans;
    }
};
