
Approach:
two pointer and sliding window











Example 1:

Input: A = [1,1,1,0,0,0,1,1,1,1,0], K = 2
Output: 6
Explanation: 
[1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1.  The longest subarray is underlined.
Example 2:

Input: A = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], K = 3
Output: 10
Explanation: 
[0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1.  The longest subarray is underlined.





class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
            int ans=0;
            int left=0;
            int count=0;
            int i=0;
            int n=A.size();
            while(i<n)
            {
                if(A[i]==0)
                {
                    count++;    
                }
                 while(count>K)
                 {
                         if(A[left]==0)
                         {
                                 count--;
                         }
                         
                         left++;
                 }
                 
                    
                    ans = max(ans,i-left+1);
                    i++;
                 
            }
            
            return ans;
    }
        
};
