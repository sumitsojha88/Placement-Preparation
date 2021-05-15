

// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends





int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
  for(int i=0;i<n;i++)
  {
      pq.push(make_pair(mat[i][0],make_pair(i,0)));
  }
  
  while(!pq.empty())
  {
      k--;
      pair<int,pair<int,int>> temp = pq.top();
      pq.pop();
      
      if(k==0)
       {
           return temp.first;
       }
       
       int iarr = temp.second.first;
       int iele = temp.second.second;
       if(iele<n-1)
       {
            pq.push(make_pair(mat[iarr][iele+1],make_pair(iarr,iele+1)));
       }
      
  }
  
  
   return -1;
  
  
  
  
}
