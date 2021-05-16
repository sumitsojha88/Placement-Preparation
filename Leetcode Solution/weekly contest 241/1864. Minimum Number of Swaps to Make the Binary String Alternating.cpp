

class Solution {
public:
    int minSwaps(string s) {
            
            int count=0;
            int n=s.size();
            int ca=0;
            int cb=0;
            int odd=0;
            int even=0;
            if(n<2) return 0;
            
            for(int i=0;i<n;i++)
            {
                 if(s[i]=='1')
                         odd++;
                    else
                            even++;
                    
            }
            if(abs(odd-even)>1) return -1;
            
            string a="";
            string b="";
            for(int i=0;i<n;i++)
            {
                    if(i%2==0)
                    {
                            a += "0";
                    }
                    else
                            a += "1";
            }
             for(int i=0;i<n;i++)
            {
                    if(i%2==0)
                    {
                            b += "1";
                    }
                    else
                            b += "0";
            }
            if(odd==even)
            {
            
            for(int i=0;i<n;i++)
            {
                    if(s[i]!=a[i])
                            ca++;
            }
             
            for(int i=0;i<n;i++)
            {
                    if(s[i]!=b[i])
                         cb++;
            }
            
            return min(ca/2,cb/2);
            }
            
            if(odd>even)
                    a = b;
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    if(s[i]!=a[i]) ans++;
            }
            return ans/2;
            
        
    }
};
