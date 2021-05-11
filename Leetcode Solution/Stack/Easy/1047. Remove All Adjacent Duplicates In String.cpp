
Question link:- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/


class Solution {
public:
    string removeDuplicates(string s) {
        
               stack<char> st;
            for(int i=0;i<s.size();i++)
            {
                  if(st.empty())
                  {
                         st.push(s[i]); 
                  }
                  else if(st.top()==s[i])
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
