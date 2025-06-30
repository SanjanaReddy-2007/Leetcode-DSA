class Solution {
public:
    bool isPalindrome(int x) {
        int x1 = x;
        long int sum = 0;
        while (x1 > 0)
        {
            int rem = x1 % 10;
            x1 = x1 / 10;
            sum = sum * 10 + rem;
        }
        if (sum == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};