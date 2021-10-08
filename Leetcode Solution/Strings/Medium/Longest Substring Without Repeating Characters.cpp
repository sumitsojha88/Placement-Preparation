Link-https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
class Solution {
public:
     int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        int max_len=0;
        set<int> m;
        int ws=0,we=0;
        while(we<s.size())
        {
            if(m.find(s[we])==m.end())
            {
                m.insert(s[we]);
                we++;
            }
            else
            {
                m.erase(s[ws]);
                ws++;
            }
            int msize=m.size();
            max_len=max(max_len,msize);
        }
        return max_len;
    }
};
