

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
            
            unordered_map<int,int> mp;
            for(int i=0;i<wall.size();i++)
            {
                    int sum = 0;
                    for(int j=0;j<wall[i].size()-1;j++)
                    {
                            sum += wall[i][j];
                            mp[sum]++;;
                    }
            }
            int maxi=0;
            for(auto i: mp)
            {
                    maxi = max(maxi,i.second);
            }
            
            return wall.size()-maxi;
        
    }
};
