

class Solution {
public:
    int balancedStringSplit(string s) {
            
            int ans=0;
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                    if(s[i]=='R')
                            count++;
                    else 
                            count--;
                    
                    
                    if(count==0)
                    {
                            ans++;
                    }
            }
            
            return ans;
        
    }
};
