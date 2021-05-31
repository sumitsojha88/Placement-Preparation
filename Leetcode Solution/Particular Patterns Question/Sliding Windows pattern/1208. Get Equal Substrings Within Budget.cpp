
class Solution {
public:
    int equalSubstring(string s, string t, int c) {
            
            int n=s.size();
            int j=0;
            int count=0;
            int ans=0;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                   sum += abs(s[i]-t[i]);
                //    return sum;
                   while(j<n && sum>c) 
                   {
                      sum -= abs(s[j]-t[j]);
                        j++;   
                   }
                    
                    ans = max(ans,i-j+1);
            }
            
            return ans;
                    
        
    }
};
