class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(); 
        int maxVolume = 0;

        // Optimal Approach occurs by using Two-pointer Approach
        int lb = 0, rb = n-1; // Left and Right Boundaries
        while (lb < rb) {
            int wt = rb - lb;
            int ht = min(height[lb], height[rb]);
            int currVolume = wt * ht;
            maxVolume = max(maxVolume, currVolume);
            if (height[lb] < height[rb]) {
                lb++;
            }
            else {
                rb--;
            }
        }
        return maxVolume;
    }
};