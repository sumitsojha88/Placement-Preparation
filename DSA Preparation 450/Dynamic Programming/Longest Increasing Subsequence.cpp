Example 1:

Input:
N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
Explanation:Longest increasing subsequence
0 2 6 9 13 15, which has length 6
Example 2:

Input:
N = 6
A[] = {5,8,3,7,9,1}
Output: 3
Explanation:Longest increasing subsequence
5 7 9, with length 3
Your Task:
Complete the function longestSubsequence() which takes the input array and its size as input parameters and returns the length of the longest increasing subsequence.

Expected Time Complexity : O( N*log(N) )
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
0 ≤ A[i] ≤ 106
  
  
  int longestSubsequence(int n, int a[])
{
   
   vector<int> dp(n,1);
   int ans=1;
   for(int i=1;i<n;i++)
   {
       
       for(int j=0;j<i;j++)
       {
           if(a[i]>a[j])
           dp[i] = max(dp[i],dp[j]+1);
       }
       
       ans = max(ans,dp[i]);
   }
   
   
   
   return ans;
}
