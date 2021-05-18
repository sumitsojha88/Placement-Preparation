Example 1:

Input: N = 5, arr[] = {1, 101, 2, 3, 100} 
Output: 106
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3, 100}
Example 2:

Input: N = 3, arr[] = {1, 2, 3}
Output: 6
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3}

Your Task:  
You don't need to read input or print anything. Complete the function maxSumIS() which takes N and array arr as input parameters and returns the maximum value.


Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 103
1 ≤ arr[i] ≤ 105
  
  
  class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int> dp(n,0);
	   // dp[0] = arr[0];
	    int maxi = 0;
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	            dp[i] = max(dp[i]+arr[j],dp[j]+arr[j]);
	        }
	        maxi = max(maxi,dp[i]);
	    }
	    
	    return maxi;
	    
	}  
};
