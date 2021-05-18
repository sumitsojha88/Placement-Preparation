

Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.

Example 2:

Input:
N = 4, X = 2
arr[] = {1, 1, 1, 1}
Output: 6
Explanation: 
Each 1 will produce sum 2 with any 1.
  
  
 Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 105
1 <= K <= 108
1 <= Arr[i] <= 106
  
  
  class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         int count=0;
         unordered_map<int,int> mp;
         for(int i=0;i<n;i++)
         {
             int diff = k -arr[i];
             if(mp.find(diff)!=mp.end())
             {
                 count += mp[diff];
             }
             mp[arr[i]]++;
         }
         
         return count;
    }
};
