class Solution {
public:
    int totalMoney(int n) {
            
            int ans=0;
            int count=1;
            int sum=1;
            for(int i=1;i<=n;i++)
            {
                    if(i%7==0)
                    {
                          ans += sum ;
                            count++;
                            sum = count;
                    }
                    else
                    {
                    ans += sum ;
                    
                    sum++;
                    }
                    
                            
            }
            
            return ans;
        
    }
};
