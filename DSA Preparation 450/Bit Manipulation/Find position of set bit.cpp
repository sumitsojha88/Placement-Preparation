Example 1:

Input:
N = 2
Output:
2
Explanation:
2 is represented as "10" in Binary.
As we see there's only one set bit
and it's in Position 2 and thus the
Output 2.
Example 2:

Input:
N = 5
Output:
-1
Explanation:
5 is represented as "101" in Binary.
As we see there's two set bits
and thus the Output -1.

Expected Time Complexity: O(log(N))
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^8

lass Solution {
  public:
    int findPosition(int N) {
        int count=0;
        int ans=0;
        int res;
        while(N)
        {
            if(N&1)
            {
            ans++;
            res = count + 1;
            }
            
            
            count++;
            
            N = N/2;
            
        }
        if(ans==0 || ans>1)
        return -1;
        else
        return res;
    }
};
