
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
       std::vector<int> v(A.size());
            int l=0;
            int r=A.size()-1;
            int i=0;
            while(l<=r && i<A.size())
            {
                    if(A[i]%2==0)
                            v[l++]=A[i++];
                    else
                            v[r--]=A[i++];
            }
                    
                
            
            
        return v; 
            
    }
};
