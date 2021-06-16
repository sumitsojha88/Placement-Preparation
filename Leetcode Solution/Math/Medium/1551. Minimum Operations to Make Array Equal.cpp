

Example 1:

Input: n = 3
Output: 2
Explanation: arr = [1, 3, 5]
First operation choose x = 2 and y = 0, this leads arr to be [2, 3, 4]
In the second operation choose x = 2 and y = 0 again, thus arr = [3, 3, 3].
Example 2:

Input: n = 6
Output: 9
  
Approach:
1) First we will create an array whic consist 2*i+1 values.
2) we than calculate center value of array i.e at n/2 index.
3) Then we will calculate no. of operations needed .  
  
  class Solution {
public:
    int minOperations(int n) {
            
            int a[n];
            for(int i=0;i<n;i++)
            {
                    a[i] = 2*i + 1;
            }
            int temp = a[n/2];
            int sum = 0;
            for(int i=0;i<n;i++)
            {
                    sum += abs(a[i]-temp);
            }
            
            
            return sum/2;
        
    }
};

Solution 2 using O(1) space

class Solution {
public:
    int minOperations(int n) {
            
            int ans=0;
            int t =0;
            if(n%2)
             t = 2*(n/2)+1;
            else
             t = (2*((n-1)/2)+1 + 2*((n+1)/2)+1)/2;
            // return t;
            for(int i=0;i<n/2;i++)
            {
                    ans += t - (2*i+1);
            }
            
            return ans;
    }
};
