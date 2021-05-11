

Quesdtion link : https://leetcode.com/problems/make-the-string-great/


class Solution {
public:
    string makeGood(string s) {
            
            
            stack<char> st;
            for(int i=0;i<s.size();i++)
            {
                  if(st.empty())
                  {
                         st.push(s[i]); 
                  }
                  else if(islower(s[i]) && st.top()==toupper(s[i]))
                  {
                          st.pop();
                  }
                    else if(isupper(s[i]) && st.top()==tolower(s[i]))
                    {
                            st.pop();
                    }
                    else
                    {
                            st.push(s[i]);
                    }
            }
            string ans="";
            while(st.size())
            {
                   ans += st.top();
                    st.pop();
            }
            
            reverse(ans.begin(),ans.end());
            
            
            return ans;
        
    }
};
