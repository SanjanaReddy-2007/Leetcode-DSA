class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.length();
        k = min(k, (int)s.length());

        if (k <= 1) return s;
        if (k > n) k = n;

        int i = 0, j = k-1;
        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }
};