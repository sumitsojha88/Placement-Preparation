

class Solution {
public:
    int longestBeautifulSubstring(string word) {
            
            int n=word.size();
            int j=1;
            int ans=0;
            int count=1;
            for(int i=1;i<n;i++)
            {
                    if(word[i-1]==word[i])
                    {
                            j++;
                            
                    }
                    else if(word[i]>word[i-1])
                    {
                            count++;
                            j++;
                    }
                    else
                    {
                            count  = 1;
                            j = 1;
                            
                    }
                    
                    if(count==5)
                    ans =max(ans,j);
            }
            
            return ans;
        
    }
};
