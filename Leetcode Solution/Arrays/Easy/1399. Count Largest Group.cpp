
class Solution {
public:
    int countLargestGroup(int n) {
            
            map<int,int> mp;
            for(int i=1;i<=n;i++)
            {
                    int t=i;
                    int sum=0;
                    while(t)
                    {
                         sum += t%10;
                            t=t/10;
                    }
                    mp[sum]++;
            }
            int maxi=0;
            int count=0;
            for(int i=1;i<100;i++)
            {
                    if(maxi==mp[i] || maxi==0)
                    {
                            maxi = max(maxi,mp[i]);  
                            count++;
                    }
                    else if(maxi<mp[i])
                    {
                            count=1;
                            maxi = mp[i];
                    }
                            
            }
            
            return count;
        
    }
};
