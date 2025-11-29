class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0, max = nums[0];
        for (int num : nums) {
            sum += num;
            if (num > sum) {
                max = num;
            }
        }

        int count = 0;
        while (sum % k != 0) {
            count++;
            sum--;
        }
        return count;
    }
};