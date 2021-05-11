

Questionlink: https://leetcode.com/problems/basic-calculator/

class Solution {
public:
    int calculate(string s) {
        stack<int> st,op;
            int curr = 0;
            int num = 0;
            int ans=0;
            int sign = 1;
            
            for(int i=0;i<s.size();i++)
            {
                    
                 
                 if(isdigit(s[i]))
                 {
                         curr = (curr*10) + (s[i]-'0');
                 } 
                 else 
                 {
                          ans += curr*sign;
                         curr = 0;
                         
                         if(s[i]=='-')
                         {
                                 sign = -1;
                         }
                         if(s[i]=='+')
                         {
                               sign = 1;
                         }
                         if(s[i]=='(')
                         {
                                st.push(ans);
                                 op.push(sign);
                                 ans = 0;
                                 sign =1;
                         }
                         if(s[i]==')' && op.size())
                         {
                                 ans = ans*op.top() + st.top();
                                 op.pop();
                                 st.pop();
                         }
                        
                 }
                     
                       
            }
            
            
               ans += sign*curr;
                   
            
            
            return ans;
    }
};
