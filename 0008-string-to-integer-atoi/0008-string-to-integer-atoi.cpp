class Solution {
public:
    long long rec(char i, long long &a) {
        return a = a * 10 + (i - '0');
    }

    int myAtoi(string s) {
        string ans = "";
        int sign = 1;
        bool signTaken = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && ans.empty() && !signTaken) {
                continue;
            }
            else if (s[i] == '-' && ans.empty() && !signTaken) {
                sign = -1;
                signTaken = true;
            }
            else if (s[i] == '+' && ans.empty() && !signTaken) {
                signTaken = true;
            }
            else if (!isdigit(s[i])) {
                break;
            }
            else {
                ans += s[i];
            }
        }

        long long a = 0;

        for (int i = 0; i < ans.size(); i++) {
            rec(ans[i], a);

            if (sign == 1 && a > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -a < INT_MIN)
                return INT_MIN;
        }

        return a * sign;
    }
};