
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
            
            vector<int> ans;
            stack<int> st;
            int i=0;
           while(i<a.size())
            {
                   if(st.empty())
                    {
                            st.push(a[i++]);
                    }
                   
                    else if(st.top()>0 && a[i]<0)
                    {
                            if(st.top()>abs(a[i]))
                            {
                                   i++; 
                            }
                            else if(st.top()<abs(a[i]))
                            {
                                    st.pop();
                            }
                             else if(abs(st.top())==abs(a[i]))
                            {
                             st.pop();
                            i++;
                            }
                    }
                   else
                   {
                           st.push(a[i++]);
                   }
            }
                                
                                while(!st.empty())
                                {
                                        ans.push_back(st.top());
                                        st.pop();
                                }
        
            reverse(ans.begin(),ans.end());
                                
                                return ans;
    }
};
