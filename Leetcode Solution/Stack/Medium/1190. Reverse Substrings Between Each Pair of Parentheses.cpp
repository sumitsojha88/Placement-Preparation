

class Solution {
public:
    string reverseParentheses(string s) {
            
        
            
            stack<int> st;
            
            for(int i=0;i<s.size();i++)
            {
                   if(s[i]=='(')
                   {
                        st.push(i);   
                   }
                    else if(s[i]==')')
                    {
                        reverse(s.begin()+st.top(),s.begin()+i);
                            st.pop();
                    }
            }
            string ans="";
            for(int i=0;i<s.size();i++)
            {
                    if(s[i]!='(' && s[i]!=')')
                    ans += s[i];
            }
            
            
            return ans;
            
            
             /*   stack<char> st;
            stack<char> res;
            string ans="";
            
            for(int i=0;i<s.size();i++)
            {
                 if(s[i]==')')
                 {
                         
                          stack<char> res;
                         stack<char> res2;
                         while(!st.empty() && st.top()!='(')
                         {
                                 
                                 res.push(st.top());
                                 
                                 st.pop();
                         }
                         
                         if(st.top()=='(')
                         {
                                 st.pop();
                         }
                         
                         while(!res.empty() )
                         {
                                 
                                 res2.push(res.top());
                                 
                                 res.pop();
                         }
                         
                         while(!res2.empty())
                         {
                                 
                                 st.push(res2.top()); 
                                 res2.pop();
                         }
                         
                         
                 }
                    else
                    {
                            st.push(s[i]);
                    }
            }
            
           while(!st.empty())
           {
                   ans += st.top();
                   st.pop();
           }
            
            reverse(ans.begin(),ans.end());
            return ans; */
        
    }
};
