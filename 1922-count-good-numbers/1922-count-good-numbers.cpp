class Solution {
public:
    int countGoodNumbers(long long n) {
        long long left = (n + 1) / 2;
        long long right = n / 2;

        long long ans = 1;
        long long bms = 1;

        long long k = 1000000007;

        paw(5, left, ans, k);
        bow(4, right, bms, k);

        return (ans * bms) % k;
    }

    long long paw(long long a, long long left, long long &ans, long long k) {
        if (left == 0) {
            return ans;
        }

        if (left % 2 != 0) {
            ans = (ans * a) % k;
        }

        a = (a * a) % k;

        return paw(a, left / 2, ans, k);
    }

    long long bow(long long a, long long right, long long &ans, long long k) {
        if (right == 0) {
            return ans;
        }

        if (right % 2 != 0) {
            ans = (ans * a) % k;
        }

        a = (a * a) % k;

        return bow(a, right / 2, ans, k);
    }
};