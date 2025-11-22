class Solution {
public:
    int count = 0;
    int minimumOperations(vector<int>& nums) {
        for (int num : nums) {
            if (num % 3 != 0) count++; 
        }
        return count;
    }
};