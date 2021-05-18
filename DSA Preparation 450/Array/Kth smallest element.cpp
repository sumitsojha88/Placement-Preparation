
Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.
  
  
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N 
//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    
  /*  priority_queue<int> pq;
    for(int i=0;i<r+1;i++)
    {
        pq.push(arr[i]);
        
    }
    for(int i=0;i<k;i++)
    {
        pq.pop();
        
    }
    
    return pq.top(); */
    
    
    sort(arr,arr+r+1);
    return arr[k-1];
}
