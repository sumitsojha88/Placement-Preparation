
Approach:
using map and two pointer technique







Example 1:

Input: S = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits S into less parts.






class Solution {
public:
    vector<int> partitionLabels(string S) {
        
            unordered_map<int,int> mp;
            for(int i=0;i<S.size();i++)
            {
                    mp[S[i]-'a'] = i;
            }
            
            vector<int> ans;
            int t=0;
            int j=0;
            for(int i=0;i<S.size();i++)
            {
                    j = max(j,mp[S[i]-'a']);
                   if(i==j)
                   {
                           ans.push_back(i-t+1);
                           t = i+1;
                   }
            }
            return ans;
    }
};
