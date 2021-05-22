class Solution {
public:
    vector<int> partitionLabels(string s) {
            
            unordered_map<char,int> mp;
            int n=s.size();
            vector<int> ans;
            for(int i=0;i<n;i++)
            {
                    mp[s[i]] = i;
            }
            int maxi=0;
            int j=0;
            for(int i=0;i<n;i++)
            {
                   j = max(j,mp[s[i]]);
                    if(i==j)
                    {
                         ans.push_back(i-maxi +1 ); 
                            maxi = i+1;
                    }
                    
                   
            }
            
            return ans;
        
    }
};
