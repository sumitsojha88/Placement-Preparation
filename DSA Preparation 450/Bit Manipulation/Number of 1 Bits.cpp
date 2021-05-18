

Example 1:

Input:
N = 6
Output:
2
Explanation:
Binary representation is '110' 
So the count of the set bit is 2.
Example 2:

Input:
8
Output:
1
Explanation:
Binary representation is '1000' 
So the count of the set bit is 1.
  
  
Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)
  
  
  
  class Solution
{
public:
    int setBits(int N)
    {
        int count=0;
        while(N)
        {
            if(N&1)
            count++;
            
            
            N = N/2;
        }
        
        
        return count;
    }
};
