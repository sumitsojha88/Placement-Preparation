

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        
            sort(A.begin(),A.end());        // sort in increasing order
            for(int i=A.size()-3;i>=0;i--)
            {
              
                    if(A[i]+A[i+1]>A[i+2])                // simply using triangle rule a + b >c 
                            return A[i]+A[i+1]+A[i+2];
            }
            
            return 0;
    }
};
