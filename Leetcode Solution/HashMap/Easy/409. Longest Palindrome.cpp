
Question link:https://leetcode.com/problems/longest-palindrome/


class Solution {
public:
    int longestPalindrome(string s) {
            
            unordered_map<char,int> mp;
            for(int i=0;i<s.size();i++)
            {
                    mp[s[i]]++;
            }
            int c=0;
            for(int i=0;i<s.size();i++)
            {
                    if(mp[s[i]]%2)
                    {
                            c++;
                            mp[s[i]] = 0;
                    }
            }
            
            if(c==0)
                    return s.size();
            else
            return s.size()-c+1;
        
    }
};
