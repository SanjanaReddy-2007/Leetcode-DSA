class Solution {
public:

    int firstOccurance(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        int ans = -1;
        while (st <= end) {
            int mid = st + (end-st)/2;
            if (nums[mid] >= target) {
                end = mid-1;
            } else{
                st = mid+1;
            }
            if (nums[mid] == target) {
                ans = mid;
            }
        }
        return ans;
    }

    int secondOccurance(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        int ans = -1;
        while (st <= end) {
            int mid = st + (end-st)/2;
            if (nums[mid] <= target) {
                st = mid+1;
            } else {
                end = mid-1;
            }
            if (nums[mid] == target) {
                ans = mid;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccurance(nums, target), secondOccurance(nums, target)};
    }
};