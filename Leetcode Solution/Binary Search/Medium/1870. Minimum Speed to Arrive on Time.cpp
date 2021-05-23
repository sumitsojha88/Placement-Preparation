
class Solution {
public:
    int minSpeedOnTime(vector<int>& d, double hour) {
            
            int n=d.size();
            if(n>ceil(hour))
            {
                    return -1;
            }
            
        //    int n=d.size();
            int l=1;
            int r=1e7;
            int ans=-1;
            while(l<=r)
            {
                    int m = (l+r)/2;
                    double sum = 0;
                    for(int i=0;i<n-1;i++)
                    {
                            sum +=  ceil((double)d[i]/m);
                    }
                    sum += (double)(d[n-1])/m;
                    
                    if(sum>hour)
                    {
                            
                            l = m + 1;
                    }
                    else
                    {
                            ans = m;
                            r  = m-1;
                    }
            }
            
            return ans;
            
        
    }
};
