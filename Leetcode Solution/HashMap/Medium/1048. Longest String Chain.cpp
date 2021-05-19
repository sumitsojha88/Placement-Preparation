
class Solution {
public:
      static  bool compare(string &a,string &b)
        {
                return a.size()<b.size();
        }
    int longestStrChain(vector<string>& words) {
        
            sort(words.begin(),words.end(),compare);
            
            int n=words.size();
            
            int maxi=0;
            
            unordered_map<string,int> mp;
            vector<int> dp(n,1);
            
            for(int i=0;i<n;i++)
            {
                   mp[words[i]] = i+1;
                   for(int j=0;j<words[i].size();j++)
                   {
                          string st = words[i].substr(0,j);
                          string end = words[i].substr(j+1);
                          string sub = st + end;
                           
                          if(mp[sub])
                          {
                                dp[i] = max(dp[i],dp[mp[sub]-1]+1);     
                          }
                           
                   }
                    
            }
            
            int ans=0;
            for(int i=0;i<n;i++)
            {
                  ans = max(ans,dp[i]);
            }
            
            return ans;
    }
};
