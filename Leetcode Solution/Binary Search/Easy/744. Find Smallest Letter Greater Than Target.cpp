

class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char t) {
            
            int n=a.size();
            
            if(t>=a[n-1]) return a[0];
            
            for(int i=0;i<n;i++)
            {
                    if(t<a[i])
                    {
                            return a[i];
                    }
            }
            
            
            
            return a[0];
            
            
        
    }
};
