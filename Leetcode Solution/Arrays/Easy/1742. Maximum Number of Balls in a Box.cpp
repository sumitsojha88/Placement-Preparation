
class Solution {
public:
    int countBalls(int l, int h) {
        
            unordered_map<int,int> mp;
              int maxi = 0;
           
            for(int i=l;i<=h;i++)
            {
                 int t = i;
                    int sum = 0;
                    while(t)
                    {
                            sum += t%10;
                            t = t/10;
                    }
                    
                    mp[sum]++;
                     maxi = max(maxi,mp[sum]);
            }
          return maxi;
    }
};
