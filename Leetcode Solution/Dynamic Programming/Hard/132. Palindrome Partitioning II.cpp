class Solution {
public:
    vector<vector<bool>>dp;
    vector<int>dp1;
    int rec(int id,int n){
        if(id==n)
            return 0;
        if(dp1[id]!=-1)
            return dp1[id];
        int ans=n;
        for(int j=id;j<n;j++){
            if(dp[id][j]){
                // cout<<id<<" !! "<<j<<" @@ ";
                ans = min(ans,1+rec(j+1,n));
            }
        }
        return dp1[id] = ans;
    }
    
    int minCut(string s) {
        int n = s.size();
        dp = vector<vector<bool>>(n,vector<bool>(n,0));
        dp1 = vector<int>(n,-1);
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            if(i<n-1&&s[i]==s[i+1])
                dp[i][i+1]=1;
        }
        for(int l=3;l<=n;l++){
            for(int i=0;i+l<=n;i++){
                int j = i+l-1;
                if(s[i]==s[j])
                    dp[i][j] = dp[i+1][j-1];
            }
        }
        
        return rec(0,n)-1;
        
    }
};