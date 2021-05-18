
Example 1:

Input: N = 1
Output: true
Explanation: 1 is equal to 2 raised to 0 (20 == 1).
Example 2:

Input: N = 98
Output: false
Explanation: 
98 cannot be obtained by any power of 2.
  
  
  Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^18
  
  
  
  bool isPowerofTwo(long long n){
    
    
    if((n&(n-1))==0) 
    return true;
    else
    return false;
    
}
