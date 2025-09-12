class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;

        int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        int currDir = 0;
        int row = 0, col = 0;
        while (ans.size() < m*n) {
            ans.push_back(matrix[row][col]);
            matrix[row][col] = 1000;
            int nextRow = row + dir[currDir][0];
            int nextCol = col + dir[currDir][1];
            if (nextRow < 0 || nextRow >= m || nextCol < 0 || nextCol >= n || matrix[nextRow][nextCol] == 1000) {
                currDir = (currDir+1)%4;
            }
            row += dir[currDir][0];
            col += dir[currDir][1];
        }
        return ans;
    }
};