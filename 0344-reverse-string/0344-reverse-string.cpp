class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int st = 0, end = s.size()-1;
        vector<char> result;

        while (st < end) {
            swap(s[st], s[end]);
            st++;
            end--;
        }
        for (char val : s) {
            result.push_back(val);
        }
        
        
    }
};