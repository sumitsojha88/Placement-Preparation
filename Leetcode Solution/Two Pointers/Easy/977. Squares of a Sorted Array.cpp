
Approach 1:
Using sorting O(nlogn)
first we will square every no. than we will sort them.
  
Approach 2:
Using two pointer O(n)
we know list is already sorted so largest positive elemnet is present in end and vice versa.
so we will compare first and   last element whose absolute value is greater and push its square into ans array.




Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Approach 1: using sorting O(nlogn)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
            
            for(int i=0;i<nums.size();i++)
            {
                    nums[i] = nums[i]*nums[i];
            }
            
            sort(nums.begin(),nums.end());
            
            return nums;
        
    }
}; 


  
Approach 2:
Using two pointer O(n)

vector<int> solve(vector<int>& nums) {

    int i=0;
            int n=nums.size();
            vector<int> ans;
            int j=nums.size()-1;
            while(i<=j)
            {
                     int si = nums[i]*nums[i];
                     int sj = nums[j]*nums[j];
                     if(si>sj)
                     {      
                           ans.push_back(si);
                             i++;
                     }
                     else 
                     {
                           ans.push_back(sj);
                             j--;            
                     }
            }
            
            reverse(ans.begin(),ans.end());
            
            
            return ans;
    
}


