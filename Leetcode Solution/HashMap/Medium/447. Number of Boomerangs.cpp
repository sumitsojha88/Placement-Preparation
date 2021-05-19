

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        
            
            int ans = 0;
        
        for(int i=0; i<p.size() ; i++){
                unordered_map<int, int> mp;
            for(int j=0 ; j<p.size() ; j++){
                    
                int d = pow(p[j][1] - p[i][1], 2) + pow(p[j][0] - p[i][0], 2);
                ans += 2 * mp[d]++;
            }
           
        }
        return ans;
    }
};
