
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      sort(nums.begin(), nums.end());
	int len = nums.size();
	int sum = 0;
	for(unsigned i = 0; i < len; i+=2)
		sum += nums[i];
	return sum;
            
}
};
