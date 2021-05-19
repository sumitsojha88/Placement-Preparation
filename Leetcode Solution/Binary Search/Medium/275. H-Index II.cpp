
class Solution {
public:
    int hIndex(vector<int>& a) {
            
            int l=0;
            int r=a.size()-1;
            int n=a.size();
            while(l<=r)
            {
                int m=(l+r)/2;
                    if(a[m]==(n-m))
                    {
                            return a[m];
                    }
                    else if(a[m]>(n-m))
                    {
                            r = m-1;
                    }
                    else
                    {
                            l = m+1;
                    }
            }
            
            
            return n-(r+1);
        
            
    }
};
