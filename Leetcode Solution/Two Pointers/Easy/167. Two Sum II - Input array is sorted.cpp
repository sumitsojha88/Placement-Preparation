
Approach 
using two pointer technique






Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
Example 2:

Input: numbers = [2,3,4], target = 6
Output: [1,3]



Constraints:

2 <= numbers.length <= 3 * 104
-1000 <= numbers[i] <= 1000
numbers is sorted in increasing order.
-1000 <= target <= 1000
Only one valid answer exists.



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
                
            int n=nums.size();
            int i=0;
            int j=n-1;
            vector <int> r(2);
          while(i<j)
          {
              if(nums[i]+nums[j]==target)
              {
                      r[0] = i+1;
                      r[1] = j+1;
                      return r;
              }
                   if(nums[i]+nums[j]>target)
                  {
                          j--;
                  }
                   if(nums[i]+nums[j]<target)
                  {
                          i++;
                  }
          }
            
            return r;
    }
};
