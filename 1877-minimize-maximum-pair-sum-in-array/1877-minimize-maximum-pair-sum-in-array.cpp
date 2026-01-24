class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n-1;

        sort(nums.begin(), nums.end());
        
        int maxSum = 0;
        while (st < end) {
            maxSum = max(maxSum, nums[st++]+nums[end--]);
        }
        return maxSum;
    }
};