class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int st = 0, end = k-1;
        int minDiff = INT_MAX;

        sort(nums.begin(), nums.end()); // First sort the array

        for (int i = 0; i < k; i++) {   // First window
            minDiff = nums[end]-nums[st];
        }

        for (int i = k; i < nums.size(); i++) { // Remaining windows
            st++;end++;
            minDiff = min(minDiff, nums[end]-nums[st]);
        }
        return minDiff;
    }
};