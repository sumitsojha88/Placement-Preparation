
bool solve(string s0, string s1) {

    unordered_map<int,int> mp;
 for(int i=0;i<26;i++)
    {
        mp[i] = 0;
    }
    for(int i=0;i<s0.size();i++)
    {
        mp[s0[i]-'a']++;
    }

    for(int i=0;i<s1.size();i++)
    {
        mp[s1[i]-'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(mp[i]!=0)
        return false;
    }

    return true;
    
}
