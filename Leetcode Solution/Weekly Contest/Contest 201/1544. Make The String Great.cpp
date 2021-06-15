
class Solution {
public:
    string makeGood(string s) {
            
            string ans="";
            stack<char> st;
            int n=s.size();
            for(int i=0;i<n;i++)
            {
                    if(st.empty())
                    {
                            st.push(s[i]);
                    }
                    else if((s[i]-'A')==(st.top()-'a'))
                    {
                            st.pop();
                    }
                    else if((s[i]-'a')==(st.top()-'A'))
                    {
                            st.pop();
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
            
            return ans;
        
    }
};
