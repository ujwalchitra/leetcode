class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0;

        for (int i = n; i <= n + 10; i++) {
            if (i < 10 && i%t  == 0) {
                ans = i;
                break;
            } if (i>=10){
                string a = to_string(i);
                int b = a[0] - '0';
                int c = a[1] - '0';
                if ((b * c) % t == 0) {
                    ans = i;
                    break;
                }
            }
        }

        return ans;
    }
};