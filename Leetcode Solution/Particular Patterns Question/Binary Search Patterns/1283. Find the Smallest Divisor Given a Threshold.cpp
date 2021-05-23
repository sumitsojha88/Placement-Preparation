 Same as koko loves banana



class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
            
            int l=1;
            int n=nums.size();
            int r=*max_element(nums.begin(),nums.end());
            while(l<r)
            {
                    int m = (l+r)/2;
                    int sum=0;
                    for(int i=0;i<n;i++)
                    {
                            sum += (nums[i]+m-1)/m;
                    }        
                     
                    if(sum>t)
                    {
                            l = m + 1; 
                    }
                    else
                    {
                             r = m;  
                    }
            }
            
            return l;
        
    }
};
