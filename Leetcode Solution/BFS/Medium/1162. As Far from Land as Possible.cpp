
class Solution {
        int x[4]={-1,0,1,0};
        int y[4]={0,1,0,-1};
public:
    int maxDistance(vector<vector<int>>& grid) {
            
            int  n=grid.size();
            int  m=grid[0].size();
            int maxi=0;
            queue<pair<int,int>> q;
          //  vector<vector<int>> d(n,vector<int>(m,-1));
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                         if(grid[i][j]==1)
                         {
                               //  grid[i][j]=0;
                                 q.push({i,j});
                         }
                    }
            }
          
           while(!q.empty())
           {
                   pair<int,int> p=q.front();
                   q.pop();
                   for(int i=0;i<4;i++)
                   {
                        int xx = p.first + x[i];
                        int yy = p.second + y[i];
                        if(xx>=0 && xx<=n-1 && yy>=0 && yy<=m-1)
                        {
                                       if(grid[xx][yy]==0)
                                       { 
                                               q.push({xx,yy});
                                        grid[xx][yy] = grid[p.first][p.second]+1;
                                        maxi = max(maxi,grid[xx][yy]);
                                       }
                                       
                        }
                   }
                                          
           }
                                  
                  if(maxi)  
                  return maxi-1;
                  else
                   return -1;
        
    }
};
