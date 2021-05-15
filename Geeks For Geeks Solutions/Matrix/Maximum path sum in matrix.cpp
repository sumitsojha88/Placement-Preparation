

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<vector<int>> dp(N, vector<int> (N,0));
        for(int i=N-1;i>=0;i--)
        {
            for(int j=0;j<N;j++)
            {
                if(i==N-1)
                {
                  continue;
                }
                else if(j==0)
                {
                    Matrix[i][j] += max(Matrix[i+1][j],Matrix[i+1][j+1]);
                }
                else if(j==N-1)
                {
                    Matrix[i][j] += max(Matrix[i+1][j],Matrix[i+1][j-1]);
                }
                else
                {
                    Matrix[i][j] += max(Matrix[i+1][j],max(Matrix[i+1][j-1],Matrix[i+1][j+1]));
                }
            }
        }
        
        
        int maxi = 0;
        for(int i=0;i<N;i++)
        {
            maxi = max(Matrix[0][i],maxi);
        }
        return maxi;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
