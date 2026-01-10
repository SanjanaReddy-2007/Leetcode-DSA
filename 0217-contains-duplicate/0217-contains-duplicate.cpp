class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for (int n : nums) {
            if (!numSet.contains(n)) {
                numSet.insert(n);
            } else {
                return true;
            }
        }
        
        return false;        
    }
};