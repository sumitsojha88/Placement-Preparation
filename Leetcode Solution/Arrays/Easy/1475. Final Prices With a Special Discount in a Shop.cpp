
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
            int n=prices.size();
            vector<int> ans;
            int count=0;
            int j;
            for(int i=0;i<n;i++)
            {
                    for( j=i+1;j<n;j++)
                    {
                          if(prices[i] >= prices[j])
                          {
                                 ans.push_back(prices[i]-prices[j]);
                                  break;
                          }
                         
                    }
                    if(j==n)
                    {
                            ans.push_back(prices[i]);
                    }
                    
                       
            }
           
            
            return ans;
        
    }
};
