
class Solution {
public:
        void dfs(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int>& t,int i,int n)
        {
               t.push_back(i);
                if(i==n)
                {
                        ans.push_back(t);
                        return;               
                }
                
                for(int j=0;j<graph[i].size();j++)
                {
                        dfs(graph,ans,t,graph[i][j],n);
                        t.pop_back();
                }             
                
        }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> t;
          int n=graph.size();  
         dfs(graph,ans,t,0,n-1);
            
            return ans;     
    }
};
