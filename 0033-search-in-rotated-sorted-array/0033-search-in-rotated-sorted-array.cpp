class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;

        while (st <= end) {
            int mid = st + (end-st)/2;

            if (nums[mid] == target) {
                return mid;
            }
            if (nums[st] <= nums[mid]) { // Left sorted
                if (nums[st] <= target && target <= nums[mid]) { // Target on left 
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else { // Right Sorted
                if (nums[mid] <= target && target <= nums[end]) { // Target on right
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};