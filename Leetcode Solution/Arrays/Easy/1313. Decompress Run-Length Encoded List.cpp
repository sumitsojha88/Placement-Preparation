
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
            for(int i=1;i<nums.size();i=i+2)
            {
                    int num=nums[i-1];
                    int t=nums[i];
                    for(int i=0;i<num;i++)
                    {
                              ans.push_back(t);
                    }
            }
            return ans;
    }
};
