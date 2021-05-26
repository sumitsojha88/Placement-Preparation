
class Solution {
     int x[4]={-1,1,0,0}; 
     int y[4]={0,0,-1,1};
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
          int m=grid[0].size();
          queue<pair<int,int>> q;
            int c=0;
            int f=0;
            int ans=0;
            
            for(int i=0;i<n;i++)
            {    
                    for(int j=0;j<m;j++)
                    {
                         if(grid[i][j]==2)
                         {
                                 q.push({i,j});
                         }
                            else if(grid[i][j]==1)
                            {
                                    f++;
                            }
                    }
            }
         //   if(c<1) return -1;
            
            while(!q.empty() && f>0)
            {
                    int size=q.size();
                    while(size--)
                    {
                            
                    pair<int,int> p=q.front();
                    q.pop();
                    for(int i=0;i<4;i++)
                    {
                            int xx = p.first + x[i];
                            int yy = p.second + y[i];
                            if(xx>=0 && xx<=n-1 && yy>=0 && yy<=m-1)
                            {
                                    if(grid[xx][yy]==1)
                                    {
                                          q.push({xx,yy});
                                          grid[xx][yy] = 2;  
                                            f--;
                                    }        
                            }
                    }
                            
                    }
                    
                    ans++;
                    
            }
            
            if(f>0) return -1;
            else
            return ans;
            
    }
};
