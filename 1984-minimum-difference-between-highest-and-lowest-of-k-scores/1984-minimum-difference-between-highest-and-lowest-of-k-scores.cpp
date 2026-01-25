class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int st = 0, end = k-1;
        int minDiff = INT_MAX;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < k; i++) {
            minDiff = nums[end]-nums[st];
        }

        for (int i = k; i < nums.size(); i++) {
            st++;end++;
            minDiff = min(minDiff, nums[end]-nums[st]);
        }
        return minDiff;
    }
};