

bool solve(string s) {

    unordered_map<int,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]-'a']++;
        if(mp[s[i]-'a']>1)
        {
            return false;
        }
    }
   
    
    return true;
}
