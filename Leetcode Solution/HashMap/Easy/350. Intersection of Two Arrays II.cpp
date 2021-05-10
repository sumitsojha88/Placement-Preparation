
Question link:-https://leetcode.com/problems/intersection-of-two-arrays-ii/


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
            vector<int> ans;
            unordered_map<int,int> mp;
            for(int i=0;i<nums1.size();i++)
            {
                
                    mp[nums1[i]]++;
            }
            
             for(int i=0;i<nums2.size();i++)
            {
                 if(mp[nums2[i]])
                 {
                       ans.push_back(nums2[i]);
                         mp[nums2[i]]--;
                 }
                    
                    
            }
            
            
        return ans;
    }
};
