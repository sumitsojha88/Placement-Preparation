
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        
            unordered_map<int,int> mp;
            int ans=0;
            int mini;
            int maxi=0;
            for(int i=0;i<r.size();i++)
            {
                    mini = min(r[i][0],r[i][1]);
                    maxi = max(mini,maxi);
                    
                    mp[mini]++;
                    
                    ans = mp[maxi];
            }
            
            return ans;
    }
};
