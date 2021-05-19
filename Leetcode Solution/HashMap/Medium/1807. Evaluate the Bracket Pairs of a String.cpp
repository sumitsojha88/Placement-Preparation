

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& t) {
            
            unordered_map<string,string> mp;
            for(int i=0;i<t.size();i++)
            {
                    mp[t[i][0]] = t[i][1];
            }
            
            string ans="";
            for(int i=0;i<s.size();i++)
            {
                    string temp="";
                    int j;
                    if(s[i]=='(')
                    {
                            j = i+1;
                             while(s[j]!=')')
                    {
                            temp += s[j];
                            j++;
                    }
                    if(mp.find(temp)!=mp.end())
                    {
                            ans += mp[temp];
                    }
                    else
                    {
                            ans += '?';
                    }
                            
                            i = j;
                    }
                    else
                    {
                            ans += s[i];
                    }
                   
                    
                    
                    
            }
            
            
            return ans;
        
    }
};
