
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
