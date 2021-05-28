
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
            vector<int> row(n,0);
            vector<int> col(m,0);
            for(int i=0;i<indices.size();i++)
            {
                    row[indices[i][0]]++;
                    col[indices[i][1]]++;
            }
            int count=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                        if((row[i]+col[j])%2)
                                count++;
                }
            }
            
            
            return count;
            
    }
};
