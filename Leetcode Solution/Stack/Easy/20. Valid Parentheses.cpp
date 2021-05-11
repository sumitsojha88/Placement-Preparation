

Question ljink : https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s)
    {
        
            stack<char> st;
            for(int i=0;i<s.size();i++)
            {
                    if(st.empty())
                    {
                            st.push(s[i]);
                    }
                    else if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
                    {
                         st.push(s[i]);   
                    }
                    else 
                    {
                            if(s[i]=='}' && st.top()!='{')
                                    return false;
                          else  if(s[i]==')' && st.top()!='(')
                                   return false;
                          else  if(s[i]==']' && st.top()!='[')
                                    return false;
                            
                            
                            st.pop();

                    }
            }
            
            
            
            
            if(st.empty())
            return true;
            else
            return false;
    }
};
