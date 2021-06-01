
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
            
            int n=nums.size();
            int j=0;
            int ans=0;
            int count=0;
            int c=0;
            for(int i=0;i<n;i++)
            {
                    if(nums[i]%2)
                    {
                            count++;
                            c=0;
                    }
                    
                    while(j<n && count>=k)
                    {
                            if(nums[j++]%2)
                            {
                                    count--; 
                                    
                            }
                            
                            
                          c++;       
                    }
                    
                    ans += c;
                   
            }
            
            return ans;
        
    }
};
