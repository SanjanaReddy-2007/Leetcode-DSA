class Solution {
public:

    void getPermutations(vector<int>& nums, int idx, vector<vector<int>>& res) {
        if (idx == nums.size()) {
            res.push_back({nums});
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);       // where idx is the ith element choice
            getPermutations(nums, idx+1, res);

            swap(nums[idx], nums[i]);   // backtracking step
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        getPermutations(nums, 0, res);
        return res;
    }
};