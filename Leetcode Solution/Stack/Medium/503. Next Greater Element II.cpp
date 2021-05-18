

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
            
           int n=nums.size();
             vector<int> ans(n,-1);
             stack<int> s;
            for(int i=0;i<2*n;i++)
            {
                    int j=i;
                    if(j>=n)
                    {
                            j = j - n;
                    }
                    while(!s.empty() && nums[s.top()]<nums[j])
                    {
                           ans[s.top()] = nums[j];
                            s.pop();
                    }

                    s.push(j);
            }
            
            
            return ans;
        
    }
};
