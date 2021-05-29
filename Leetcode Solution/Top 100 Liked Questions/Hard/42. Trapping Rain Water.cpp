
class Solution {
public:
    int trap(vector<int>& h) {
       
            int n=h.size();
            if(n==0) return 0;
            vector<int> l(n);
            vector<int> r(n);
            l[0] = h[0];
            r[n-1] = h[n-1];
            for(int i=1;i<n;i++)
            {
                l[i] = max(l[i-1],h[i]);
            }
            for(int i=n-2;i>=0;i--)
            {
                r[i] = max(r[i+1],h[i]);
            }
          //  reverse(r.begin(),r.end());
            
            vector<int> ans(n);
            int sum=0;
            for(int i=0;i<n;i++)
            {
                  ans[i] = min(l[i],r[i])-h[i];  
                    sum += ans[i];
            }
            
            return sum;
            
            
    }
};
