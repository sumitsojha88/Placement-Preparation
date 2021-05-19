

class Solution {
public:
    int beautySum(string s) {
        
            int sum = 0;
           for(int i=0;i<s.size()-1;i++)
           {
                   unordered_map<char,int> mp;
                   
                   mp[s[i]]++;
                   for(int j=i+1;j<s.size();j++)
                   {
                           mp[s[j]]++;
                           int mini = INT_MAX;
                           int maxi = INT_MIN;
                           for(auto m: mp)
                           {
                                   
                                   mini = min(mini,m.second);
                                   maxi = max(maxi,m.second);
                           }
                           
                           
                         
                                   sum += maxi - mini;
                           
                           
                   }
           }
            
            return sum;
    }
};
