class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a = 0;
        int b=0;
        int sum = 0;
        int sum2 = 0;
        int i = 1;
        int k=1;
        while (true) {
            if (a == n) {
                break;
            }
            if (i % 2 == 0) {
                sum = sum + i;
                i++;
                a++;
            } else {
                i++;
            }
        }
        while (true) {
            if (b == n) {
                break;
            }
            if (k % 2 != 0) {
                sum2 = sum2 + k;
                k++;
                b++;
            } else {
                k++;
            }
        }
        return gcd(sum,sum2);
    }
};