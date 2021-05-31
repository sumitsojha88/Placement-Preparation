
class Solution {
public:
    int numberOfSubstrings(string s) {
            
            int n=s.size();
            int count=0;
            int j=0;
            int ans=0;
            unordered_map<int,int> mp;
            for(int i=0;i<n;i++)
            {
                  mp[s[i]-'a']++;
                  while(mp[0] && mp[1] && mp[2] && j<n)
                  {
                         count++;
                         mp[s[j]-'a']--;
                          j++;
                  }
                    
                    
                    ans += count;
            }
            
            return ans;
        
    }
};
