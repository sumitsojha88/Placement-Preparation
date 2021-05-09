
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
            unordered_map<string,int> mp;
            for(int i=0;i<items.size();i++)
            {
                    if(ruleKey=="color")
                    {
                           mp[items[i][1]]++; 
                    }
                   else if(ruleKey=="type")
                   {
                         mp[items[i][0]]++;    
                   }
                    else if(ruleKey=="name")
                    {
                           mp[items[i][2]]++;  
                    }
            }
            
            
            return mp[ruleValue];
    }
};
