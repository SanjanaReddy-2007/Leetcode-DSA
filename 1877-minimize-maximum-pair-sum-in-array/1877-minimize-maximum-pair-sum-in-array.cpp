class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n-1;
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> pairs;
        while (st < end) {
            pairs.push_back({nums[st], nums[end]});
            st++;end--;
        }
        int maxSum = INT_MIN;
        for (int i = 0; i < n/2; i++) {
            int sum = pairs[i].first + pairs[i].second;
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};