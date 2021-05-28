
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
            
            int sum = 0;
            int n=mat.size();
            int m=mat[0].size();
            for(int i=0;i<n;i++)
            {
                    sum += mat[i][i];
            }
            int j=0;
            for(int i=n-1;i>=0;i--)
            {
                    sum += mat[j][i];
                    j++;
                    
            }
            
            int t= mat[n/2][m/2];
            
            if(n%2==0)
                    return sum;
            else
                    return sum - t;
        
            
            
            
            
            
    }
};
