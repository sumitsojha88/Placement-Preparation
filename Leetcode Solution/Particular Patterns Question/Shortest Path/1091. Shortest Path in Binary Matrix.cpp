
class Solution {
        int x[8]={-1,-1,-1,0,0,1,1,1};
        int y[8]={-1,0,1,1,-1,1,0,-1};
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
            int n=grid.size();
            int m=grid[0].size();
            queue<pair<int,int>> q;
            if(grid[0][0]==1 || grid[n-1][m-1]==1) return -1;
            
            grid[0][0]=1;
            q.push({0,0});
            while(!q.empty())
            {
                    pair<int,int> p=q.front();
                    q.pop();
                    for(int i=0;i<8;i++)
                    {
                            int xx=p.first+x[i];
                            int yy=p.second+y[i];
                            if(xx>=0 && yy<=m-1 && xx<=n-1 && yy>=0)
                            {
                                    if(grid[xx][yy]==0)
                                    {
                                            grid[xx][yy] = grid[p.first][p.second]+1;
                                            q.push({xx,yy});
                                    }
                            }
                            
                    }
            }
            
            if(grid[n-1][m-1])
                    return grid[n-1][m-1];
            else
                    return -1;
            
            
    }
};
