
Appraoch 1
  Using hashmap 
 we will make map and put elements of nums1 array 
 now we will check by using map we created whether elements are already present or not
 if present we push it in ans arrayt and make that map value zero so we can't repeat.
 
 Approach 2:
 using two pointer
 First we sort both array and compare by increasing pointer.
 if found same we push it in ans array.
 




Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Appraoch 1
  Using hashmap                                   

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            
            unordered_map<int,int> mp;
             for(int i=0;i<nums1.size();i++)
            {
                           mp[nums1[i]]++;
            }
            vector<int> ans;
            for(int i=0;i<nums2.size();i++)
            {
                    if(mp[nums2[i]])
                    {
                            ans.push_back(nums2[i]);
                            mp[nums2[i]] = 0;
                    }
            }
            
            return ans;
        
    }
};
