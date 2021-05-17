

bool solve(vector<int>& nums) {

if(nums.size()==1) return false;
    unordered_map<int,int> mp;
    int n=nums.size();
    
    for(int i=0;i<n;i++)
    {
        if(mp[3*nums[i]])
        {
            return true;
        }
        else
        {
            if(nums[i]%3==0)
            {
                if(mp[nums[i]/3])
                {
                    return true;
                }
            }
        }
        mp[nums[i]]++;
        
    }
    
    return false;
}
