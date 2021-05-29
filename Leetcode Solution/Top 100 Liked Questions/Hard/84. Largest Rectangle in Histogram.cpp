
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
            
            vector<int> l;
            vector<int> r;
            stack<int> sl;
            stack<int> sr;
            int n=h.size();
            for(int i=n-1;i>=0;i--)
            {
                    while(sr.size()>0 && h[sr.top()]>=h[i])
                    {
                            sr.pop();
                    }
                    if(sr.size()==0)
                    {
                         r.push_back(n);   
                    }
                    else
                    {
                            r.push_back(sr.top());
                    }
                    
                    sr.push(i);
            }
            reverse(r.begin(),r.end());
             for(int i=0;i<n;i++)
            {
                    while(sl.size()>0 && h[sl.top()]>=h[i])
                    {
                            sl.pop();
                    }
                    if(sl.size()==0)
                    {
                         l.push_back(-1);   
                    }
                    else
                    {
                            l.push_back(sl.top());
                    }
                    
                    sl.push(i);
            }
            
           long long int ans=0;
          long long  int width[n];
            for(int i=0;i<n;i++)
            {
                    width[i] = r[i]-l[i]-1;
                    ans = max(ans,(width[i])*h[i]);
            }
            
            return ans;
        
    }
};
