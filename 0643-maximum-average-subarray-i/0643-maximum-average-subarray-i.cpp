class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;

        for (int i = 0; i < k; i++) { // O(k)
            sum += nums[i];
        }

        double avg = sum/k;
        int j = 0;
        for (int i = k; i < n; i++) { // O(n-k)
            sum += nums[i];
            sum -= nums[j];
            j++;
            double newavg = sum/k;
            avg = max(avg, newavg);
        }
        return avg;
    }
};