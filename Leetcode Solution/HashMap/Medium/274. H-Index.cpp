

class Solution {
public:
    int hIndex(vector<int>& a) {
            
            sort(a.begin(),a.end());
            int n=a.size();
            for(int i=0;i<a.size();i++)
            {
                 if(a[i]>=n-i)
                 {
                         return n-i;
                 }
            }
            
            
            return 0;
        
    }
};
