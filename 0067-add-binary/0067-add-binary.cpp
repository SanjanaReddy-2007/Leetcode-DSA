class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        
        int i = a.length()-1, j = b.length()-1;

        while (i >= 0 || j >= 0 || carry == 1) {
            carry += ((i >= 0)? a[i]-'0':0);
            carry += ((j >= 0)? b[j] - '0' : 0);

            ans = char(carry % 2 + '0') + ans;

            carry /= 2;
            i--;
            j--;
        }
        return ans;
    }
};