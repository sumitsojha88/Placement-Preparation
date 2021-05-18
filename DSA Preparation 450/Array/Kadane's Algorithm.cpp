
Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)
  
  
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107




  int maxSubarraySum(int arr[], int n){
        
        int maxi=arr[0];
        int ans=arr[0];
        int sum=0;
        for(int i=1;i<n;i++)
        {
            maxi = max(arr[i],maxi+arr[i]);
            
            ans = max(ans,maxi);
        }
        return ans;
        



