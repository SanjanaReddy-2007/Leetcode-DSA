class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long total = 0;
        int min_abs = INT_MAX;
        int negative_count = 0;
        for (auto& row : matrix) {
            for (int x : row) {
                total += abs(x);
                min_abs = min(min_abs, abs(x));
                if (x < 0) negative_count++;
            }
        }
        return negative_count % 2 == 0 ? total : total-2*min_abs;
    }
};