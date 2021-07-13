
class Solution {
public:
        bool ispalindrome(string s){
                int i=0;
                int j=s.size()-1;
                while(i<=j)
                {
                        if(s[i]!=s[j]) return false;
                        
                        i++;
                        j--;
                }
                return true;
        }
        
        void backtrack(string s,vector<string>& t,vector<vector<string>>& ans)
        {
            if(s.size()==0)
            {
                    ans.push_back(t);
                    return;
            }
                for(int i=0;i<s.size();i++)
                {
                        string left = s.substr(0,i+1);
                        string right = s.substr(i+1);
                        if(ispalindrome(left))
                        {
                                t.push_back(left);
                                backtrack(right,t,ans);
                                t.pop_back();
                        }
                }
        }
    vector<vector<string>> partition(string s) {
            int n=s.size();
            vector<string> t;
            vector<vector<string>> ans;
            backtrack(s,t,ans);
            return ans;
        
    }
};
