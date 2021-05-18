

class Solution {
public:
    int evalRPN(vector<string>& s) {
            
            
            stack<int> st;
            for(int i=0;i<s.size();i++)
            {
                    if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="/")
                    {
                            int ft = st.top();
                            st.pop();
                            int sect = st.top();
                            st.pop();
                            
                            if(s[i]=="+")
                            {
                                st.push(ft+sect);   
                            }
                            else if(s[i]=="-")
                            {
                                st.push(sect-ft);   
                            }
                            else if(s[i]=="*")
                            {
                                st.push(ft*sect);   
                            }
                            else if(s[i]=="/")
                            {
                                st.push(sect/ft);   
                            }
                    }
                    else
                    {
                            st.push(stoi(s[i]));
                    }
                    
            }
            
            
            return st.top();
        
    }
};
