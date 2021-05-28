
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
            
            int n=A.size();
            int suma=0;
            int m=B.size();
            int sumb=0;
            vector<int> ans;
            sort(A.begin(),A.end());
             sort(B.begin(),B.end());
            for(int i=0;i<n;i++)
            {
                 suma+= A[i];   
            }
            for(int i=0;i<m;i++)
            {
                 sumb+= B[i];   
            }
            int diff = (suma - sumb)/2 ;
            
            unordered_map<int,int> mp;
            for(int i=0;i<n;i++)
            {
                    mp[A[i]]++;
            } 
            for(int i=0;i<m;i++)
            {
                  if(mp.find(B[i]+diff)!=mp.end())
                  {
                          ans.push_back(B[i]+diff);
                          ans.push_back(B[i]);
                          break;
                          
                  }
            } 

            
            return ans;
            
        
    }
};
