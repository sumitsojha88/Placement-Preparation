

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
            
            unordered_map<string, vector<string>> mp;
            vector<vector<string>> res;
            string fp, fc;
            
             for (auto path : paths) {
            istringstream buf(path);
            istream_iterator<string> beg(buf), end;
            vector<string> v(beg, end);
            for (int i = 1; i < v.size(); i++) {
                fp = v[0] + "/" + v[i].substr(0, v[i].find('('));
                fc = v[i].substr(v[i].find('(') + 1);
                mp[fc].push_back(fp);
            }
                     
        }
        
              for (auto [content, paths] : mp) {
            if (paths.size() > 1) {
                res.push_back(paths);
            }
        }
        return res;
    }
};
