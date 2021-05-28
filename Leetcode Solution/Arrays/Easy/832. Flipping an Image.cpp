
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int m=A.size();
            int n=A[0].size();
            for(int i=0;i<A.size();i++)
            {
                    reverse(A[i].begin(), A[i].end());
            }
            for(int i=0;i<m;i++)
            {
                    for(int j=0;j<n;j++)
                    {
                            if(A[i][j]==1)
                            {
                                    A[i][j]=0;
                            }
                            else
                            {
                                    A[i][j]=1;
                            }
                            
                    }
            }
            return A;
    }
};
