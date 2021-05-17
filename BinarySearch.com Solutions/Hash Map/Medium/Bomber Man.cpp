

int solve(vector<vector<int>>& matrix) {

    unordered_map<int,int> r;
    unordered_map<int,int> c;
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==1)
            {
                r[i]++;
                c[j]++;
            }
        }
    }
   int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(!r[i] && !c[j])
           {
               ans++;
           }
        }
    }

    return ans;

    
    
}
