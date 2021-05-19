
class Solution {
public:
    string alphabetBoardPath(string target) {
        
            unordered_map<char, pair<int,int>> mp;
            string ans="";
            for(int i = 0; i < 26;i++) 
            {
                  mp[i+'a'] = {i%5,i/5};
            }
            
         //   start = 'a';
            for(int i=0;i<target.size();i++)
            {
                   int  x = mp[target[i]].first;
                   int  y = mp[target[i]].second;
                    
                    int dx=0;
                    int dy=0;
                    
                    if(i==0)
                    {
                            dx = x ;
                            dy = y ;
                    }
                    
                    if(i>0)
                    dx = x - mp[target[i-1]].first;
                    if(i>0)
                    dy = y - mp[target[i-1]].second;
                    
                    
                     while(dy<0)
                    {
                          ans += 'U';
                            dy++;
                    }
                    while(dx>0)
                    {
                          ans += 'R'; 
                            dx--;
                    }
                    while(dx<0)
                    {
                            
                            ans += 'L';
                             dx++;
                        
                    }
                    while(dy>0)
                    {
                          ans += 'D';
                            dy--;
                    }
                   
                    
                            ans += '!';
                    
            }
            
            
            
            return ans;
    }
};
