

Question Link: https://leetcode.com/problems/filter-restaurants-by-vegan-friendly-price-and-distance/

Solution: 

class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& r, int v, int maxP, int maxD) {
            
            vector<pair<int,int>> vv;
            vector<int> ans;
            
            for(int i=0;i<r.size();i++)
            {
                  if((r[i][2]==v || v==0) && r[i][3]<=maxP && r[i][4]<=maxD)
                  {
                         vv.push_back({r[i][1],r[i][0]}); 
                  }
            }
            
            sort(vv.rbegin(),vv.rend());
            for(int i=0;i<vv.size();i++)
            {
                    ans.push_back(vv[i].second);
            }
            
            return ans;
        
    }
};
