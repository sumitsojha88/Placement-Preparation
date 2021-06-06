

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& t) {
            int n=mat.size();
            int m=mat[0].size();
            vector<vector<int>> dpu(n,vector<int>(m,0));  // rotating by 180
            vector<vector<int>> dpl(n,vector<int>(m,0)); // rotating by 90 towards left
            vector<vector<int>> dpr(n,vector<int>(m,0)); // rotating by 90 towards right
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            dpu[n-i-1][m-j-1] = mat[i][j];
                    }
            }
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            dpl[j][m-i-1] = mat[i][j];
                    }
            }
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            dpr[n-i-1][m-j-1] = dpl[i][j];
                    }
            }
            
           
            
            if(dpu==t || dpl==t || dpr==t || mat==t) return true;
            else return false;
            
        
    }
};
