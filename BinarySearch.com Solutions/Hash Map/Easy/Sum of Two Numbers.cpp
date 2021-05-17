

bool solve(vector<int>& nums, int k) {

  unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        if(mp[k-nums[i]])
        {
            return true;
        }

        mp[nums[i]]++;
    }

    return false;
    
}
