

int solve(vector<vector<string>>& matrix, vector<string>& blocks) {
      unordered_map<string, pair<int,int>> mp;
         //   string ans="";
            int n = matrix.size();
            int m = matrix[0].size();
            for(int i = 0; i <matrix.size();i++) 
            {
                for(int j=0;j<matrix[0].size();j++)
                {
                  mp[matrix[i][j]] = {i,j};
                }
            }
            
         //   start = 'a';
            int ans=0;
            for(int i=0;i<blocks.size();i++)
            {
                   int  x = mp[blocks[i]].first;
                   int  y = mp[blocks[i]].second;
                    
                    int dx=0;
                    int dy=0;
                    
                    if(i==0)
                    {
                            dx = x ;
                            dy = y ;
                    }
                    
                    if(i>0)
                    dx = x - mp[blocks[i-1]].first;
                    if(i>0)
                    dy = y - mp[blocks[i-1]].second;
                    
                    
                     while(dy<0)
                    {
                          ans++;
                            dy++;
                    }
                    while(dx>0)
                    {
                          ans++; 
                            dx--;
                    }
                    while(dx<0)
                    {
                            
                            ans++;
                             dx++;
                        
                    }
                    while(dy>0)
                    {
                          ans++;
                          dy--;
                    }
                   
                    
                            
                    
            }
            
            
            
            return ans;
}
