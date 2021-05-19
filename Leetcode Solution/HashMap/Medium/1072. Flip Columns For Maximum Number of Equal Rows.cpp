

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& a) {
            unordered_map<string,int> mp;
            int ans=0;
            for(int i=0;i<a.size();i++)
            {
                    string s = "";
                    for(int j=0;j<a[i].size();j++)
                    {
                            if(a[i][0]==a[i][j])
                            {
                                    s += '1';
                            }
                            else
                            {
                                    s += '0'; 
                            }
                    }
                    
                    mp[s]++;
                    
                    ans = max(ans,mp[s]);
            }
            return ans;
        
    }
};
