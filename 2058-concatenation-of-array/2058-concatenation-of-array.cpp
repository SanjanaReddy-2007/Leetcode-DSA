class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> array;
        for (int i = 0; i < nums.size(); i++) {
            array.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            array.push_back(nums[i]);
        }
        return array;
    }
};