class Solution {
public:
    vector<string> getFolderNames(vector<string>& s) {
            
            vector<string> ans;
            unordered_map<string,int> mp;
           
            for(int i=0;i<s.size();i++)
            {
                    string t=s[i];
                    int j=mp[t];
                    while(mp[t])
                    {
                        //  t = s[i];
                          t = s[i] + "(" + to_string(j++) + ")";    
                            mp[s[i]] = j;
                    }
                   
                    ans.push_back(t);
                     mp[t]++;
            }
            
            return ans;
        
    }
};
