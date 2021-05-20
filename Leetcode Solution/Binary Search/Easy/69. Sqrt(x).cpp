

class Solution {
public:
   long long int mySqrt(int x) {
            
          long long  int i=1;
          long long  int j=x;
          long long  int ans=0;
            while(i<=j)
            {
                   long long int m=(i+j)/2;
                    long long int prod = m*m;
                    if(m<=(x/m))
                    {
                            ans = m;
                            i = m+1;
                    }
                    else
                    {
                            j = m -1;
                    }
            }
            
            return ans;
        
    }
};
