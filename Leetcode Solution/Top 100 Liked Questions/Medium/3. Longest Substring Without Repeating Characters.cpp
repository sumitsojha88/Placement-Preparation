
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            
            int n=s.size();
            unordered_map<char,int> mp;
            
            int st=0;
            int maxi=0;
            for(int i=1;i<=n;i++)
            {
                   if(mp[s[i-1]]>st)
                   {
                           st = mp[s[i-1]];
                   }
                    
                    
                    maxi = max(maxi,i-st);
                    mp[s[i-1]] = i;
            }
            
            
          
            
            return maxi;
        
    }
};
