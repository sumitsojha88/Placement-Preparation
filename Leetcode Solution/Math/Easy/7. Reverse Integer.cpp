
class Solution {
public:
    int reverse(int x) {
            
            bool sign = true;
            if(x<0)
            {
                    sign = false;  
            }
          int  xx = abs(x);
           // if(x>=INT_MAX) return 0;
            
           long long int sum=0;
            while(xx>0)
            {
                    if(sum*10 > INT_MAX) 
                            return 0;
                    sum = sum*10 + xx%10;
                    xx = xx/10;
            }
            
             if(sign)
            return sum;
            else
            return (-1)*sum;
                    
        
    }
};
