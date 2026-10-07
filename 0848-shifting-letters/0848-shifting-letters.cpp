class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long sum = 0;
        vector<int> v;
        for (int i = 0; i < shifts.size(); i++) {
            sum = (sum + shifts[i]%26)%26;
        }
        v.push_back(sum);
        for (int i = 1; i < shifts.size(); i++) {
            sum = (sum - shifts[i - 1]%26+26)%26;
            v.push_back(sum);
        }
        string ans = "";
        for (int i = 0; i < v.size(); i++) {
            char c = s[i];
            c = 'a' + (c - 'a' + v[i]) % 26;
            ans += c;
        }
        return ans;
    }
};