

Ques link;https://leetcode.com/problems/word-pattern/


class Solution {
public:
    bool wordPattern(string p, string s) {
        
            unordered_map<char,string> mpa;
            unordered_map<string,char> mpb;
            istringstream st(s);
            vector<string> ss;
            string t;
            while(st >> t)
            {
                    ss.push_back(t);
            }
            
            
            if(ss.size()!=p.size()) return false;
            
             for(int i=0;i<ss.size();i++)
            {
                       if(mpa.find(p[i])!=mpa.end())
                  {
                          if(mpa[p[i]]!=ss[i])
                          {
                                  return false;
                          }
                  }
                    
                    mpa[p[i]] = ss[i]; 
            }
            for(int i=0;i<ss.size();i++)
            {
                       if(mpb.find(ss[i])!=mpb.end())
                  {
                          if(mpb[ss[i]]!=p[i])
                          {
                                  return false;
                          }
                  }
                    
                    mpb[ss[i]] = p[i]; 
            }
            
            return true;
    }
};
