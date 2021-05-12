
Questionlink: https://leetcode.com/problems/happy-number/



class Solution {
public:
    bool isHappy(int n) {
            
            unordered_map<int,int> mp;
            mp[0]=0;
            mp[1]=1;
            mp[2]=4;
            mp[3]=9;
            mp[4]=16;
            mp[5]=25;
            mp[6]=36;
            mp[7]=49;
            mp[8]=64;
            mp[9]=81;
            
            while(n!=1)
            {
                    if(n==89)
                    {
                            return false;
                    }
                    if(n==1) return true;
                    
                    
                    int t = n;
                    int sum=0;
                    while(t>0)
                    {
                          sum += mp[t%10];
                            t = t/10;
                    }
                    
                     n = sum;
                    
                    
                    
            }
            
            return true;
            
        
    }
};
