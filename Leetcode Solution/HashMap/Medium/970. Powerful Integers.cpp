

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
            
            vector<int> ans;
            if(x==1 && y==1)
            {
                    if(bound>=2)
                    {
                    ans.push_back(2);
                    return ans;
                    }
                    else
                    {
                            return ans;
                    }
            }
                    
            unordered_map<int,int> mp;
            int x1 = 0;
            if(x!=1)
            {
            for(int i=0;i<=bound;i++)
            {
                    
                    if(pow(x,i)<=(bound-1))
                    {
                            x1++;
                    }
                    else
                    {
                            break;
                    }
            }
            }
           
             int x2 = 0;
            if(y!=1)
            {
            for(int i=0;i<=bound;i++)
            {
                    if(pow(y,i)<=(bound-1))
                    {
                            x2++;
                    }
                    else
                    {
                            break;
                    }
            }
            }
       //     ans.push_back(x2);
            for(int i=0;i<=x1;i++)
            {
                    for(int j=0;j<=x2;j++)
                    {
                            if((pow(x,i)+pow(y,j))<=bound)
                            {
                                    if(mp[pow(x,i)+pow(y,j)]==0)
                                    {
                                            ans.push_back(pow(x,i)+pow(y,j));
                                            mp[pow(x,i)+pow(y,j)]++;
                                    }
                            }
                            else if((pow(x,i)+pow(y,j))>bound)
                            {
                                    break;
                            } 
                    }
            }
           sort(ans.begin(),ans.end());
        
            return ans;
    }
};
