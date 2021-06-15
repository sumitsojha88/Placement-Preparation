
class Solution {
public:
    char findKthBit(int n, int k) {
        
            string second =  "0";
            for(int i=1;i<n;i++)
            {
                string t = second;
                second += '1' ;
                for(int i=0;i<t.size();i++)
                {
                        if(t[i]=='0')
                        {
                                t[i] = '1';
                        }
                        else
                        {
                               t[i] = '0'; 
                        }
                }
                    
                    reverse(t.begin(),t.end());
                    
                    second += t;
            
            }
            string ans = second;
            char res;
            for(int i=0;i<ans.size();i++)
            {
                  if(i==(k-1))
                  {
                          res = ans[i];
                          break;
                  }
            } 
            return res;
        
    }
};
