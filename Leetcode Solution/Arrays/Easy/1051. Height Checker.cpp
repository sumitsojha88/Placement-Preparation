
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(heights);
        sort(begin(v), end(v));
        int ans = 0, n = v.size();

        for (int i = 0; i < n; ++i)
            if (v[i] != heights[i])
                ans++;
        
            return ans;
    }
};
