

class Solution {
public:
    int balancedString(string s) {
           
            unordered_map<char,int> mp;
            int n=s.size();
            int j=0;
            int count=0;
            int ans=INT_MAX;
            for(int i=0;i<n;i++)
            {
                   mp[s[i]]++;
            }
            for(int i=0;i<n;i++)
            {
                  mp[s[i]]--;
         while(j<n && mp['Q']<=n/4 &&  mp['W']<=n/4 &&  mp['E']<=n/4 &&  mp['R']<=n/4)
         {
                 
                 ans = min(ans,i-j+1);
                 mp[s[j++]]++;
         }
                    
            }
            
            
            return ans;
        
    }
};
