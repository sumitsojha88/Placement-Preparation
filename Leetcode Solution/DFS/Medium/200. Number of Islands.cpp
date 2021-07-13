class Solution {
public:
        void dfs(vector<vector<char>>& grid, vector<vector<bool>>& v, int i, int j, int n, int m)
        {
           if(i<0 || i>=n || j<0 || j>=m )
           {
                   return ;
           }
                
           if(grid[i][j]=='0' || v[i][j]) return;
                
                v[i][j]=true;
                
                dfs(grid,v,i+1,j,n,m);
                dfs(grid,v,i,j-1,n,m);
                dfs(grid,v,i-1,j,n,m);
                dfs(grid,v,i,j+1,n,m);
        }
    int numIslands(vector<vector<char>>& grid) {
            if (grid.empty()) return 0;

            int n=grid.size();
            int m=grid[0].size();
            vector<vector<bool>> v(n,vector<bool>(m,false));
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                         if(grid[i][j]=='1' && !v[i][j])  
                         {
                                 dfs(grid,v,i,j,n,m);
                                 ans++;
                         }
                    }
            }
            
            return ans;
        
    }
};
