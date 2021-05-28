
class Solution {
public:
    int specialArray(vector<int>& nums) {
            
            sort(nums.begin(),nums.end());
          
            int n=nums.size();
            vector<int> ans;
            
            for(int i=0;i<n;i++)
            {
                   ans.push_back(n-i-1); 
            }
            for(int i=1;i<=nums[n-1];i++)
            {
                 int temp = i;
                    int count=0;
                    for(int j=0;j<n;j++)
                    {
                      if(temp<=nums[j])
                              count++;
                    }
                    if(count==temp)
                            return temp;
                            
            }
            
            
            
            
            return -1;
        
    }
};
