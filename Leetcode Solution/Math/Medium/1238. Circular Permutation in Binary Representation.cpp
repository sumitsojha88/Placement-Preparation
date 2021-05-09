
Example 1:

Input: n = 2, start = 3
Output: [3,2,0,1]
Explanation: The binary representation of the permutation is (11,10,00,01). 
All the adjacent element differ by one bit. Another valid permutation is [3,1,0,2]
Example 2:

Input: n = 3, start = 2
Output: [2,6,7,5,4,0,1,3]
Explanation: The binary representation of the permutation is (010,110,111,101,100,000,001,011).
  
 Approach:
Refer: https://en.wikipedia.org/wiki/Gray_code
  
  class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
            
          int p = pow(2,n);
            vector<int> ans(p,0);
            int i=0;
            for(i=0;i<p;i++)
            {
                  ans[i] = i^(i>>1);  
            }
           
            for(int i=0;i<p;i++)
            {
                    ans[i] = ans[i]^start;
            }
            
            
            return ans;
        
    }
};
