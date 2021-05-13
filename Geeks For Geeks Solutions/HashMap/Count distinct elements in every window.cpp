

#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends



vector <int> countDistinct (int A[], int n, int k)
{
   vector<int> ans;
   unordered_map<int,int> mp;
   int count=0;
   for(int i=0;i<k;i++)
   {
       if(mp[A[i]]==0)
       {
           count++;
       }
       mp[A[i]]++;
   }
   ans.push_back(count);
   
   for(int i=k;i<n;i++)
   {
       if(mp[A[i-k]]==1)
       count--;
       
       mp[A[i-k]]--;
       
       if(mp[A[i]]==0)
       count++;
       
       mp[A[i]]++;
       
       
      ans.push_back(count);
   }
   
   return ans;
   
}
