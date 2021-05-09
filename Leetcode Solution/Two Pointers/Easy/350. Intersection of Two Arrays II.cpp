
similar question ti intersection of two array 1
  
  
Approach:
 two pointer technique
 first we will sort both arrays
 now we will start both array using pointer i and j
 if at any points both element are same we push it in ans array
 if nums1[i] > nums2[j] then we increase i else j.






Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]




class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            
            vector<int> ans;
            sort(nums1.begin(),nums1.end()); 
            sort(nums2.begin(),nums2.end());
            int n = nums1.size();
            int m = nums2.size();
            int i=0;
            int j=0;
            while(i<n && j<m)
            {
                    if(nums1[i]==nums2[j])
                    {
                          ans.push_back(nums1[i]);
                            i++;
                            j++;
                    }
                    else if(nums1[i]>nums2[j])
                    {
                            j++;
                    }
                    else
                    {
                            i++;
                    }
            }
            
            return ans;
            
            
        
    }
};
