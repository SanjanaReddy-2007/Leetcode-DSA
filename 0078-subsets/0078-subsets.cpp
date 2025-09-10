class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
        if ( i == nums.size()) {
            // returning all subsets
            allSubsets.push_back({ans});
            return;
        }
        // Including elements
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, allSubsets);

        // Excluding elements
        ans.pop_back();      // Main Backtracking step
        getAllSubsets(nums, ans, i+1, allSubsets);


    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, allSubsets);

        return allSubsets;
    }
};