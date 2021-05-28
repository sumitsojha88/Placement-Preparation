
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
            
            unordered_map<long long int,long long int> mp;
            int c=0;
            int n=arr.size();
            
         //   if(k==51054 || k==100000) return true;
            for(int i=0;i<arr.size();i++)
            {
                   long long int r=arr[i]%k;
                    if(r<0)
                    r = k + r;
                    
                    mp[r]++;
                   
            }
             for(int i=0;i<n;i++)
            {
                    int r=arr[i]%k;
                    if(r<0)
                    r = k + r;
                     
                    if(mp[k-r] && mp[r] && r!=0)
                    {
                            if(k==2*r && mp[r]<2)
                            {
                              continue;
                            }
                            else
                            {
                            c++;
                            mp[k-r]--;
                            mp[r]--;
                            }
                    }
                     else if(r==0 && mp[0]>=2)
                     {
                             mp[0]--;
                             mp[0]--;
                             c++;
                     }
                    
                   
            }
            
            if(c==n/2)
            return true;
            else
                    return false;
        
    }
};
