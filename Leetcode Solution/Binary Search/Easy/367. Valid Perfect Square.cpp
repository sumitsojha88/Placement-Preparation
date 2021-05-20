
class Solution {
public:
    bool isPerfectSquare(int num) {
            
          long long   int i=1;
          long long  int j=num;
            while(i<=j)
            {
                   long long  int m = (i-(i-j)/2);
                    if(m*m==num)
                    {
                            return true;
                    }
                    else if(m*m>num)
                    {
                       j = m - 1;      
                    }
                    else
                    {
                            i = m + 1;
                    }
            }
            
            return false;
        
    }
};
