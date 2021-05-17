

bool solve(vector<vector<int>>& votes) {

    unordered_map<int,int> mp;
    for(int i=0;i<votes.size();i++)
{
    mp[votes[i][1]]++;
    if(mp[votes[i][1]]>1)
    {
        return true;
    }
}    
return false;

}
