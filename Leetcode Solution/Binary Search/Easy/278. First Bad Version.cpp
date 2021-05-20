

class Solution {
public:
    int firstBadVersion(int n) {
            
            int i=1;
            int j=n;
            int ans=0;
            while(i<=j)
            {
                    int m=(i-(i-j)/2);
                    if(isBadVersion(m))
                    {
                          ans= m;
                          j = m -1;
                    }
                    else
                    {
                            i = m+1;
                    }
            }
            
            return ans;
            
        
    }
};
