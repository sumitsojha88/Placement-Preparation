
class Solution {
public:
    string removeOuterParentheses(string S) {
            
            string ans="";
            int c=0;
            for(int i=0;i<S.size();i++)
            {
                    if(S[i]=='(')
                    {
                       if(c++)
                       {
                               ans += S[i];
                       }
                    }
                    else
                    {
                            if(--c)
                            {
                                    ans += S[i];
                            }
                    }
            }
            
            
            return ans;
        
    }
};
