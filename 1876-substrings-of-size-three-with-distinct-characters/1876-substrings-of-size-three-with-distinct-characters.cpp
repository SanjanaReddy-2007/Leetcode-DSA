class Solution {
public:
    int countGoodSubstrings(string s) {
           int n = s.size();
        if (n < 3) return 0;

        int freq[26] = {0};
        int distinct = 0;
        int ans = 0;

        // Initialize the first window of size 3
        for (int i = 0; i < 3; i++) {
            if (freq[s[i] - 'a'] == 0) distinct++;
            freq[s[i] - 'a']++;
        }

        if (distinct == 3) ans++;

        // Slide the window
        for (int i = 3; i < n; i++) {
            char add = s[i];
            char remove = s[i - 3];

            // Add new character
            if (freq[add - 'a'] == 0) distinct++;
            freq[add - 'a']++;

            // Remove old character
            freq[remove - 'a']--;
            if (freq[remove - 'a'] == 0) distinct--;

            if (distinct == 3) ans++;
        }

        return ans;
    }
};