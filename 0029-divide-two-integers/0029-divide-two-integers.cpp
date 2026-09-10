class Solution {
public:
    int divide(int dividend, int divisor) {
        long long d = dividend;
        long long k = divisor;
        long long count = 0;
        int a = 1;
        int b = 1;
        if (d == -2147483648 && k == 1) {
            return -2147483648;
        }
        if (d == 2147483648 && k == -1) {
            return -2147483648;
        }
                if (d == 2147483647 && k == -1) {
            return -2147483647;
        }
        if (k < 0) {
            k = -k;
            a = -1;
        }
        if (d < 0) {
            d = -d;
            b = -1;
        }
        while (d >= k) {
            d = d - k;
            count++;
        }
        if (count > INT_MAX) {
            count = INT_MAX;
        }
        if (count < INT_MIN) {
            count = INT_MIN;
        }

        if (a < 0 && b < 0) {
            return count;
        }
        if (a < 0 && b > 0) {
            count = -count;
            return count;
        }
        if (b < 0 && a > 0) {
            count = -count;
            return count;
        }
        return count;
    }
};