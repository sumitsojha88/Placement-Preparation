
class Solution {
public:
    int maxCoins(vector<int>& p) {
            
            sort(p.begin(),p.end());
            int n=p.size();
            int i=0;
            int sum=0;
            for(int i=n/3;i<n;i++)
            {
                    if(n%2==1 && i%2)
                    sum += p[i];
                    if(n%2==0 && i%2==0)
                            sum += p[i];
            }
            return sum;        
    }
};
