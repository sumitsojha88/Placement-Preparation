
class Solution {
public:
    int maxDistance(vector<int>& a, vector<int>& b) {
            
            int maxi=0;
            int i=0;
            int j=0;
            int n=a.size();
            int m = b.size();
            int diff = 0;
            while(i<n && j<m)
            {
                    if(a[i]>b[j])
                    {
                            i++;
                    }
                    else
                    {
                            maxi = max(maxi,j - i);
                            j++;
                    }
            }
            
            return maxi;
        
    }
};
