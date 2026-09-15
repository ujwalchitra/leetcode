class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ans = "";

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int m = max(num1.size(), num2.size());
        while (m > num1.size()) {
            num1.push_back('0');
        }
        while (m > num2.size()) {
            num2.push_back('0');
        }
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        while (i >= 0 && j >= 0) {
            int sum = ((num1[i] - '0') + (num2[j] - '0') + carry);
            carry = sum / 10;
            sum = sum % 10;
            ans += (sum + '0');
            cout << sum;
            i--;
            j--;
        }
        if(carry){
            ans.push_back(carry+'0');
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};