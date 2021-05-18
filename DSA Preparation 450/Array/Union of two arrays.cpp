

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3

Output: 
5

Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
Example 2:

Input:
6 2 
85 25 1 32 54 6
85 2 

Output: 
7

Explanation: 
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.
  
Constraints:
1 ≤ n, m ≤ 105
1 ≤ a[i], b[i] < 105

Expected Time Complexity : O((n+m)log(n+m))
Expected Auxilliary Space : O(n+m)
  
  

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]!=1)
            {
               mp[a[i]]++;
            }
            
        }
        for(int i=0;i<m;i++)
        {
            if(mp[b[i]]!=1)
            {
               mp[b[i]]++;
            }
            
        }
        
        return mp.size();
    }
};
