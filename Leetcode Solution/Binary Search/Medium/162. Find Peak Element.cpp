

class Solution {
public:
    int findPeakElement(vector<int>& a) {
            
            
           long long int i=0;
          long long  int n=a.size();
          long long   int j=n-1;
            while(i<j)
            {
                   long long int m = (i+j)/2;
                    if(a[m]<a[m+1])
                    {
                            i = m+1;
                    }
                    else 
                    {
                            j = m;   
                    }
                    
            }
            
            
            return i;
        
    }
};
