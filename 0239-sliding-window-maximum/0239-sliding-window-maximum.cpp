class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {    // O(n)

        deque<int> dq;
        vector<int> res;

        int n = nums.size();
        // for 1st window
        for (int i = 0; i < k; i++) {
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // for remaining windows
        for (int i = k; i < n; i++) {
            // push the result i.e max lies at front of deque
            res.push_back(nums[dq.front()]);
            
            // Checking if the elements belong to curr window
            while (dq.size() && dq.front() <= i-k) {
                dq.pop_front();
            }
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};