class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        priority_queue<pair<int, int>> maxh;
        for(int val : arr){
            maxh.push({abs(val-x), val});
            if(maxh.size() > k) maxh.pop();
        }
        while(maxh.size() > 0){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(v.begin(), v.end());
        return v;
    }
};