class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {    // O(n)
        deque<int> dq;
        vector<int> res;

        // 1st window
        for (int i = 0; i < k; i++) {
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // other windows
        for (int i = k; i < nums.size(); i++) {
            res.push_back(nums[dq.front()]);

            // check if elements in deque belong to current window
            while (dq.size() > 0 && dq.front() <= i-k) {
                dq.pop_front();
            }

            // Same condition as that of 1st window
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};