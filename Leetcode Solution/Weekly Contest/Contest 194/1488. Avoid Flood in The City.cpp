
class Solution {
public:
    vector<int> avoidFlood(vector<int>& a) {
            unordered_map<int,int> mp;
            vector<int> ans(a.size(),1);
            vector<int> empty;
            stack <int> st;
            int k=0;
            for(int i=0;i<a.size();i++)
            {
                    if(a[i]==0)
                    {
                            st.push(i);
                    }
                 else if(a[i] && mp[a[i]]==0)
                  {
                          mp[a[i]] = i+1;
                          ans[i] = -1;
                  }
                  else if(a[i] && mp[a[i]] && st.size()>0)
                  {
                          if(st.top()<(mp[a[i]]-1))
                          {
                                  return empty;
                          }
                          else
                          { 
                          ans[st.top()] = a[i];
                          ans[i] = -1;
                          st.pop();
                          mp[a[i]] = 0;
                          }
                          
                  }
                  else if(a[i] && mp[a[i]] && st.empty())
                  {
                          return empty;
                  }
                 
                 
            }
            
            return ans;
        
    }
};
