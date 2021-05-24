
class Solution {
public:
    int minimumSize(vector<int>& nums, int k) {
            
            int l=1;
            int r=*max_element(nums.begin(),nums.end());
            int n=nums.size();
            while(l<r)
            {
                 int m = (l+r)/2;
                 int sum =0;
                    for(int i=0;i<n;i++)
                    {
                         sum += (nums[i]-1)/m;   
                    }
                    
                    if(sum>k)
                    {
                            l = m +1;
                    }
                    else
                    {
                            r = m;
                    }
            }
            
            return l;
        
    }
};
