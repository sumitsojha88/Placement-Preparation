
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
            
            int n=A.size();
            if(A[0]<=A[n-1])
            {
                    for(int i=0;i<n-1;i++)
                    {
                            if(A[i]<=A[i+1])
                                    continue;
                            else
                                    return false;
                    }
                     
            }
           
            
            if(A[0]>=A[n-1])
            {
                    for(int i=0;i<n-1;i++)
                    {
                            if(A[i]>=A[i+1])
                                    continue;
                            else
                                    return false;
                    }
            }
        
            return true;
            
            
            
            
    }
};
