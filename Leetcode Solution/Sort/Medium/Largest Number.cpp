class Solution {
public:
    
    static bool comparator(string &a, string &b) {
        long x = stol(a + b);
        long y = stol(b + a);
        
        return x > y;
    }
    
    string largestNumber(vector<int>& nums) {
        
        int n = nums.size();
        vector <string> s;
        string ans = "";
        
        for(int i = 0; i < n; i++)
            s.push_back(to_string(nums[i]));
            
        sort(s.begin(), s.end(), comparator);
        
        for(int i = 0; i < n; i++)
            ans += s[i];
        
        if(ans[0] == '0')
            ans = "0";
        
        return ans;        
    }
};
