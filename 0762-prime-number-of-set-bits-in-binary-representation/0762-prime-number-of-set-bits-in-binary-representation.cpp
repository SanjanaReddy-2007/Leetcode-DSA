class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        for (int i = 3; i*i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int countOne(int n) {
        int count = 0;
        while (n > 0) {
            if (n % 2 == 1) count++;
            n = n/2;
        }
        return count;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;

        for (int i = left; i <= right; i++) {
            if (isPrime(countOne(i))) count++;
        }
        return count;
    }
};