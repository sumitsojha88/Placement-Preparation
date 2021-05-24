

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
       
        vector <int> t;
         vector<vector<int>> ans;
            int n=f.size();
            int m = s.size();
            int i=0;
            int j=0;
            int maxi=0;
            int mini = INT_MAX;
            while(i<n && j<m)
            {
                    vector <int> t;
                  maxi = max(f[i][0],s[j][0]);
                  mini = min(f[i][1],s[j][1]);
                    if(maxi<=mini)
                    {
                             t.push_back(maxi);
                    t.push_back(mini);
                   
                    ans.push_back(t);
                    }
                    
                    if(s[j][1]>f[i][1])
                    {
                          i++;  
                    }
                    else
                    {
                            j++;
                    }
                    
                    
            }
            
            
            
            return ans;
            
            
            
            
    }
};
