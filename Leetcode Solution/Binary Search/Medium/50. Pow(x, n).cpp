

class Solution {
public:
    double myPow(double x, int n) {
            
            double ans=1;
            bool sign = false;
            if(n<0)
                    sign = true;
            while(n)
            {
                    if(n%2)
                            ans = ans*x;
                    
                    n = n/2;
                    x = x*x;
                            
            }
            
            if(sign)
                    return 1/ans;
            else
            return ans;
        
    }
};
