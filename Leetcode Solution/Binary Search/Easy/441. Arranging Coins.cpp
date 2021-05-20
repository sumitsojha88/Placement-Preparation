

class Solution {
public:
    int arrangeCoins(int x) {
         long long  int i=1;
          long long  int j=x;
          long long  int ans=0;
            while(i<=j)
            {
                    long long int m=(i-(i-j)/2);
                    long long int prod = m*(m+1)/2;
                    if(prod==x) return m;
                    if(x<prod)
                    {
                            j = m -1;
                    }
                    else
                            i = m + 1;
            }
            
            return j;
    }
};
