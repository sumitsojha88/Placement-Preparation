

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
            
            
            
            int n=T.size();
            vector<int> res;
            stack<int> s;
          
            for(int i=n-1;i>=0;i--)
            {
                          while( !s.empty() && T[s.top()]<=T[i] )
                            {
                                    s.pop();
                            }
                    
                    
                            if(s.empty())
                            {
                                   res.push_back(0);
                            }
                            else
                            {
                               res.push_back(s.top()-i);
                            }
                    
                    
                    
                    s.push(i);
            }
            
            reverse(res.begin(),res.end());
            
            return res; 
            
            
     
        
    }
};
