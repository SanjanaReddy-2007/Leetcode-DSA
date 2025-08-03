class Solution {
public:
    bool isValid(string s) {

        stack<char> v;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {  // opening braces
                v.push(s[i]);
            } else { // closing
                if (v.size() == 0) return false;

                if ((v.top() == '(' && s[i] == ')') || 
                    (v.top() == '[' && s[i] == ']') || 
                    (v.top() == '{' && s[i] == '}')) {
                         v.pop();
                } else {
                    return false;
                }
            }
        }
        return v.size()==0;
    }
};