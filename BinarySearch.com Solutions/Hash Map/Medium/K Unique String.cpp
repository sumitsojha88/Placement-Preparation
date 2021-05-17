

int solve(string s, int k) {
    unordered_map<char, int> mp;
    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    for (auto i : mp) {
        pq.push({i.second, i.first});
    }
    int ans = 0;
    while (pq.size() > k) {
        ans += pq.top().first;
        pq.pop();
    }

    return ans;
}
