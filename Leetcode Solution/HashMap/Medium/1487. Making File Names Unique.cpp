

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
            
            unordered_map<string,int> mp;
            vector<string> ans;
            int j;
            for(int i=0;i<names.size();i++)
            {
                     j = mp[names[i]];
                    string temp = names[i];
                  while(mp[temp]>0)
                  {
                         
                          temp = names[i] +  '(' + to_string(j++) + ')' ;         
                          mp[names[i]] = j;
                  }
                    ans.push_back(temp);                 
                    mp[temp]++;
            } 
            return ans; 
            
            
      
    }
};
