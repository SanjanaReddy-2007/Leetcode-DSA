class Solution {
public:
    bool checkString(string s) {
        int n = s.length();

        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (st.empty()) st.push(s[i]);

            if (st.top() == 'b' && s[i] == 'a') return false;
            if (st.top() == 'b' && s[i] == 'b') st.push(s[i]);
            

            if (st.top() == 'a') {
                if (s[i] == 'a') {
                    st.push(s[i]);
                }
                else {
                    while (st.top() != 'a' && !st.empty()) {
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
        return true;
    }
};