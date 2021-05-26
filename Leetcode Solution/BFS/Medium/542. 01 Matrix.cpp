
class Solution {
       int x[4]={-1,0,1,0};
       int y[4]={0,1,0,-1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
            int n=mat.size();
            int m=mat[0].size();
         //   if(n==0) return {};
            vector<vector<int>> d(n,vector<int>(m,-1));
            queue<pair<int,int>> q;
            //push i and j coordinates of all 0 
            // if its 0 than d at i an dj becomes zero distances
            
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                           if(mat[i][j]==0)
                           {
                               d[i][j] = 0;
                               q.push({i,j});  
                           }
                    }
            }
            
            while(!q.empty())
            {
                   pair<int,int> p = q.front();
                    q.pop();
                    for(int  i=0;i<4;i++)
                    {
                           int xx = p.first + x[i];
                           int yy = p.second + y[i];
                           if((xx>=0 && xx<=n-1 && yy>=0 && yy<=m-1))
                           {
                               if(mat[xx][yy]==1 && d[xx][yy]==-1)
                               {
                                       d[xx][yy] = d[p.first][p.second]+1;
                                       q.push({xx,yy});
                               }
                                          
                           }
                    }
            }
            
            return d;
            
    }
};
