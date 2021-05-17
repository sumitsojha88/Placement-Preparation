

int solve(vector<int>& nums) {

    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(mp[nums[i]])
        {
            count += mp[nums[i]];
        }
        
            mp[nums[i]]++;
        
    }

    return count;
    
}
