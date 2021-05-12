

Ques link: https://leetcode.com/problems/isomorphic-strings/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
            
            unordered_map<char,char> mp;
            unordered_map<char,char> mpa;
            for(int i=0;i<s.size();i++)
            {
                    if(mp.find(s[i])!=mp.end())
                    {
                            if(mp[s[i]]!=t[i])
                            {
                                    return false;
                            }
                    }
                    
                    mp[s[i]] = t[i];
            }
            for(int i=0;i<s.size();i++)
            {
                    if(mpa.find(t[i])!=mpa.end())
                    {
                            if(mpa[t[i]]!=s[i])
                            {
                                    return false;
                            }
                    }
                    
                    mpa[t[i]] = s[i];
            }
            
            return true;
        
    }
};
