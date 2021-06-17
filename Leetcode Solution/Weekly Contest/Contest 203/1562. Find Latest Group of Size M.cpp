

//  TLE

class Solution {
public:
        bool isvalid(string s,int m)
        {
                int count=0;
                for(int i=0;i<s.size();i++)
                {
                        if(s[i]=='1')
                        {
                                count++;
                        }
                        else
                        {
                                if(count==m)
                                {
                                        return true;
                                }
                                count=0;
                        }
                }
                if(count==m)
                   return true;
                else return false;
                
        }
    int findLatestStep(vector<int>& arr, int m) {
            
            string s="";
            int n=arr.size();
            for(int i=0;i<n;i++)
            {
                    s += '0';
            }
            for(int i=0;i<n;i++)
            {
                    s[arr[i]-1] = '1';
            }
            if(isvalid(s,m)) return n;
            for(int i=n-1;i>=0;i--)
            {
                    s[arr[i]-1] = '0';
                    if(isvalid(s,m))
                    {
                            return i;
                    }
                    
            }
            return -1;
        
    }
};
