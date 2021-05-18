


Expected Time Complexity: O(N)
Expected Space Complexity: O(1)


Constraints:
1 <= length of array <= 106 
1 <= Elements in array <= 5 * 106




Example 1:

Input: 
N = 2
arr[] = {1, 2, 3, 2, 1, 4}
Output:
3 4 
Explanation:
3 and 4 occur exactly once.
Example 2:

Input:
N = 1
arr[] = {2, 1, 3, 2}
Output:
1 3
Explanation:
1 3 occur exactly once.

class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        
        int  n= nums.size();
        int temp=0;
        for(int i=0;i<n;i++)
        {
            temp ^= nums[i];
        }
        int set = temp&(~(temp-1));
        
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&set)
            x = x^nums[i];
            else
            y = y^nums[i];
        }
        vector<int> ans;
        ans.push_back(x);
         ans.push_back(y);
         
         sort(ans.begin(),ans.end());
         
         return ans;
        
        
    }
};
