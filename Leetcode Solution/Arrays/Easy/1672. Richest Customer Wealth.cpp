
class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        
            int maxi=0;
            int n=a.size();
            int m =a[0].size();
            for(int i=0;i<n;i++)
            {
                    int sum=0;
                    for(int j=0;j<m;j++)
                    {
                            sum += a[i][j];
                    }
                    maxi = max(sum,maxi);
            }
            
            return maxi;
    }
};
