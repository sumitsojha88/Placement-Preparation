

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
            
            
            unordered_map<int,int> mp;
            for(int i=0;i<nums.size()-1;i++)
            {
                    for(int j=i+1;j<nums.size();j++)
                    {
                            mp[nums[i]*nums[j]]++;
                    }
            }
            int ans=0;
            
            for(auto i: mp)
            {
                 int t = i.second;
                  if(t>=2)
                  {
                          ans += 8*(t)*(t-1)/2 ;
                  }
            }
            
            return ans;
        
    }
};
