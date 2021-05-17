

bool solve(string s) {

    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    int odd=0;
    for(auto i: mp)
    {
        if(i.second%2)
        odd++;
    }

    return odd<2;
    
}
