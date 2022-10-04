class Solution{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int ans = 0;
        int sum = 0;
        unordered_map<int, int> map;
        map[0] = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (map.find(sum - k) != map.end())
            {
                ans += map[sum - k];
            }
            map[sum]++;
        }
        return ans;
    }
};