

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
            unordered_map<string,vector<string>> mp;
           
            for(int i=0;i<s.size();i++)
            {
                   string t = s[i];
                    sort(t.begin(),t.end());
                    mp[t].push_back(s[i]);
            }
            int i=0;
             vector<vector<string>> ans;
            ans.resize(mp.size(),{});
            
            for(auto m :mp)
            {
                    for(auto j:m.second)
                    {
                         ans[i].push_back(j);   
                    }
                    i++;
            }
            
            return ans;
            
    }
};
