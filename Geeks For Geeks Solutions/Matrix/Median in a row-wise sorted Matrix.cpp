

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        
        
        
       
        
            int prod = ((r*c)+1)/2;
            int mini = INT_MAX;
            int maxi =INT_MIN;
            for(int i=0;i<r;i++)
            {
                maxi = max(maxi,matrix[i][c-1]);
                mini = min(mini,matrix[i][0]);
            }
            while(mini < maxi)
            {
                int mid =mini+(maxi-mini)/2;
                int count=0;
                for(int i=0;i<r;i++)
                {
                   count += upper_bound(matrix[i].begin(),matrix[i].end(),mid)- matrix[i].begin();
                }
                if(count<prod)
                {
                    mini = mid +1;
                }
                else
                {
                    maxi = mid ;
                }
                
                
            }
            
            
              return mini;   
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
