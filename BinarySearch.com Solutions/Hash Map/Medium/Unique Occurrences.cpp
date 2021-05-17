

bool solve(vector<int>& nums) {

    unordered_map<int,int> mpf;
    unordered_map<int,int> mp;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
       mpf[nums[i]]++;
    }
    for(auto i: mpf)
    {
        if(mp[i.second])
        {
            return false;
        }

        mp[i.second]++;
    }

    return true;
    
}
