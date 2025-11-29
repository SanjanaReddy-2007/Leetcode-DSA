class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.length() == 1 || s.length() == 2) {
            return 0;
        }
        vector<string> res;
        for (int i = 0; i < s.length()-2; i++) {
            res.push_back(s.substr(i, 3));
        }
        int count = 0;
        for (string str : res) {
            if ((str[0] != str[1]) && (str[1] != str[2]) && (str[2] != str[0])) {
                count++;
            }
        }
        return count;
    }
};