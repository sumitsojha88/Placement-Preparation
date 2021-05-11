

Question link: https://leetcode.com/problems/next-greater-element-i/


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            
           
            stack<int> st;
            unordered_map<int,int> mp;
            int n = nums1.size();
            int m = nums2.size();
             vector<int> ans(n,-1);
            
            for(int i=0;i<m;i++)
            {
                    while(!st.empty() && st.top()<nums2[i])
                    {
                            mp[st.top()] = nums2[i];
                            st.pop();
                    }
                    
                    
                    st.push(nums2[i]);
            }
            
            for(int i=0;i<n;i++)
            {
                    if(mp.find(nums1[i])!=mp.end())
                    {
                        ans[i] = mp[nums1[i]];    
                    }
            }
            
            
            return ans;
        
    }
};
