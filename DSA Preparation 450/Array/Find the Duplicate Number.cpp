
Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [1,1]
Output: 1
Example 4:

Input: nums = [1,1,2]
Output: 1
 

Constraints:

2 <= n <= 3 * 104
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            int n=nums.size();
        sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++)
            {
                    if(nums[i]==nums[i+1])
                    {  return nums[i];
                    }                 
            }
            return -1;
    }
};
