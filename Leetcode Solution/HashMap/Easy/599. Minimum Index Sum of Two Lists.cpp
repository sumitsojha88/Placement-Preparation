


Ques link : https://leetcode.com/problems/minimum-index-sum-of-two-lists/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& a, vector<string>& b) {
            
            unordered_map<string,int> mp;
            
            for(int i=0;i<a.size();i++)
            {
                    mp[a[i]] = i+1;
            }
            int mini=INT_MAX;
            vector<string> ans;
            for(int i=0;i<b.size();i++)
            {
                    if(mp[b[i]])
                    {
                            mini = min(mini,mp[b[i]]+i-1);
                    }
            }
            for(int i=0;i<b.size();i++)
            {
                    if((mp[b[i]]+i-1)==mini && mp[b[i]])
                    {
                            ans.push_back(b[i]);
                    }
            }
            
            return ans;
            
        
    }
};
