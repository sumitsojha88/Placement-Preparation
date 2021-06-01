
class Solution {
public:
    int characterReplacement(string s, int k) {
            
            unordered_map<char,int> mp;
            int j=0;
            int ans=0;
            int n=s.size();
            int count=0;
            
            for(int i=0;i<n;i++)
            {
                    ans = max(ans,++mp[s[i]]);
                    
                    while((i-j+1)>ans+k)
                    {
                            --mp[s[j++]];
                    }
                         
            }   
            
            return n-j;
                    
        
    }
};
