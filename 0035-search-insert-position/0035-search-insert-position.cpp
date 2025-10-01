class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, end = nums.size();
        if (target > nums[end-1]) {
            return end;
        }

        while (st <= end) {
            int mid = st + (end-st)/2;
            if (nums[mid] == target) {
                return mid;
            }

            if (target < nums[mid]) {
                end = mid-1;
            } else {
                st = mid+1;
            }
        }
        return st;
    }
};