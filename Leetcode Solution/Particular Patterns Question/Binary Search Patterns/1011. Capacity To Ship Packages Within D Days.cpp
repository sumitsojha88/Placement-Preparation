


class Solution {
public:
        bool isvalid(vector<int> &a,int n,int k,int maxi)
        {
                int d=1;
                int sum=0;
                for(int i=0;i<n;i++)
                {
                        sum += a[i];
                        if(sum>maxi)
                        {
                                d++;
                                sum = a[i];
                        }
                        
                        if(d>k)
                        {
                                return false;
                        }
                }
                
                return true;
        }
    int shipWithinDays(vector<int>& w, int d) {
            
           int n=w.size();
           int maxi=0;
            int sum=0;
            int ans=-1;
            for(int i=0;i<n;i++)
            {
                    maxi = max(maxi,w[i]);
                    sum += w[i];
            }
            int s=maxi;
            int e=sum;
            while(s<=e)
            {
                    int mid = s+(e-s)/2;
                    if(isvalid(w,n,d,mid))
                    {
                            ans = mid;
                            e = mid -1;
                    }
                    else
                    {
                            s = mid +1;
                    }
            }
            
            
            
            return ans;
        
    }
};
