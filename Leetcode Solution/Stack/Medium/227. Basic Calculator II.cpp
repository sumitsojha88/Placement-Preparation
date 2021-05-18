

class Solution {
public:
    int calculate(string s) {
            
           stack<int> st;
            int curr = 0;
            char op = '+';
            for(int i=0;i<s.size();i++)
            {
                 if(isdigit(s[i]))
                 {
                         curr = (curr*10) + (s[i]-'0');
                 }
                   
                    
                 if((!isdigit(s[i]) && !iswspace(s[i])) || i==s.size()-1)
                 {
                         if(op=='-')
                         {
                                 st.push(-curr);
                         }
                         else if(op=='+')
                         {
                               st.push(curr)  ;
                         }
                          else if(op=='*')
                         {
                                  int ft = st.top();
                                  st.pop();
                               st.push(curr*ft);  
                         }
                         else if(op=='/')
                         {
                                  int ft = st.top();
                                  st.pop();
                               st.push(ft/curr);  
                         }
                          op = s[i];
                         curr = 0;

                 }
                     
                       
            }
            
            
            int ans=0;
            while(st.size()!=0)
            {
                    ans += st.top();
                    st.pop();
            }
            
            
            return ans;
        
    }
};
