

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
            
            unordered_map<int,unordered_set<int>> mp;
            vector<int> ans(k,0);
            for(int i=0;i<logs.size();i++)
            {
                  mp[logs[i][0]].insert(logs[i][1])  ;
            }
            for(auto& i:mp)
            {
                    int t = i.second.size();
                   if(t<=k)
                   {
                           ans[t-1]++;
                  }
            }
            
            return ans;
            
            
        
    }
};
