map<pair<int,int>,int >mp;
unordered_map<string,int>dp;
long long sol(int l1,int l2,int i,int j,vector<int>&cuts){
        if(i>j)return 0;
        string key=to_string(i)+"#"+to_string(j);
        if(dp.count(key))return dp[key];
        long long  ans=1e18;
        for(int k=i;k<=j;k++){
            long long t= l2-l1 + sol(l1,cuts[k],i,k-1,cuts) + sol(cuts[k],l2,k+1,j,cuts);
            if(ans>t){
                ans=t;
                mp[{i,j}]=k;
            }
        }
        
        return dp[key]=ans;
}
void fill(vector<int>&res,int i,int j,vector<int>&cuts)
{
     if(i>j)
        return;
    res.push_back(cuts[mp[{i,j}]]);
    fill(res,i, mp[{i,j}]-1,cuts);
    fill(res,mp[{i,j}]+1,j,cuts);
}
vector<int> Solution::rodCut(int n, vector<int>&cuts) {
  sort(cuts.begin(),cuts.end());
  dp.clear();
  mp.clear();
  sol(0,n,0,cuts.size()-1,cuts);
  vector<int>res;
  fill(res,0,cuts.size()-1,cuts);
  return res;
}
