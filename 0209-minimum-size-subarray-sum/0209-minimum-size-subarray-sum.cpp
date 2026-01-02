class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0, minLen = INT_MAX;
        int sum = 0; // Initializing sum of variable-sized window

        for (int right = 0; right < nums.size(); right++) {
            // Add the elements to current window
            sum += nums[right];

            while (sum >= target) {
                minLen = min(minLen, right-left+1);
                sum -= nums[left++];
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};