

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
            
            unordered_set<int> mp;
            for(int i=0;i<candies.size();i++)
            {
                    mp.insert(candies[i]);        /* makes list of distinct numbers */
            }
            
            
            return min(candies.size()/2,mp.size());     
        
    }
};
