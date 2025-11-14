class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size()/2;
        vector<int> arr;
        for (int i = 0; i < m; i++) {
            arr.push_back(nums[i]);
            arr.push_back(nums[m+i]);
        }
        return arr;
    }
};