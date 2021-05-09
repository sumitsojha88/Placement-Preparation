

Approach:
 use two pointer technique
 
 start to pointer i and j from 0
 if element is not equal to zero than swap i with j element and increase both pointers
 else increase i.



Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            
        int n=nums.size();
            int i=0;
            int j=0;
            while(i<n && j<n)
            {
                    if(nums[i]!=0)
                    {
                            swap(nums[i],nums[j]);
                            i++;
                            j++;
                    }
                    else
                    {
                            i++;
                    }
            }
            
         //   return nums;
    }
};
