
class Solution {
public:
    int minDays(vector<int>& b, int m, int k) {
        
            int l=0;
            int n=b.size();
            int r=*max_element(b.begin(),b.end());
            if(m*k>n) return -1;
            while(l<r)
            {
                    int mid = (l+r)/2;
                    int bq = 0;
                    int conti = 0;
                    for(int i=0;i<n;i++)
                    {
                            if(b[i]>mid)
                            {
                                    conti=0;
                            }
                            else if(++conti>=k)
                            {
                                    bq++;
                                    conti=0;
                            }
                    }
                    
                    if(bq<m)
                    {
                          l = mid+1;  
                    }
                    else
                    {
                            r = mid;
                    }
            }
            
            return l;
    }
};
