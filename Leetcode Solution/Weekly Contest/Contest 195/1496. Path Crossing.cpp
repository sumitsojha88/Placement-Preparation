
class Solution {
public:
    bool isPathCrossing(string p) {
            int c=0;
            int cc=0;
            int x=0;
            int y=0;
           set<pair<int,int>> mp;
            mp.insert({0,0});
            for(int i=0;i<p.size();i++)
            {
                    if(p[i]=='N')
                    {
                            y++;
                            if(mp.count({x,y}))
                                    return true;
                           
                    }
                    else if(p[i]=='S')
                    {
                            y--;
                            if(mp.count({x,y}))
                                    return true;
                    }
                    
                     if(p[i]=='W')
                    {
                            x++;
                            if(mp.count({x,y}))
                                    return true;
                    }
                     else if(p[i]=='E')
                    {
                            x--;
                           if(mp.count({x,y}))
                                    return true;
                    }
                    
                     mp.insert({x,y});
                    
            }
            
            return false;
        
    }
};
