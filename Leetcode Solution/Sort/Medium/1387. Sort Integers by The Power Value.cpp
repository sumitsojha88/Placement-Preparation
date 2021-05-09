


Question Link: https://leetcode.com/problems/sort-integers-by-the-power-value/

Solution: 

class Solution {
public:
        unordered_map<int,int> dp;
        int dpp(int a)
        {
              if(dp[a] || a==1)
              {
                      return dp[a];
              }
                
                if(a%2==0)
                {
                        dp[a] = 1 + dpp(a/2);
                }
                else
                        dp[a] = 1 + dpp(3*a + 1);
                
                
                return dp[a];
                        
        }
    int getKth(int lo, int hi, int k) {
            
            
            vector<pair<int,int>> v;
            for(int i=lo;i<=hi;i++)
            {
                    
                    
                    v.push_back({dpp(i),i});
                    
             }
            
            sort(v.begin(),v.end());
            
            return v[k-1].second;
            
        
    }
};
