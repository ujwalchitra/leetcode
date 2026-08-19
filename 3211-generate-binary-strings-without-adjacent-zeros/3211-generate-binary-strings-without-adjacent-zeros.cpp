class Solution {
public:
    vector<string> validStrings(int n) {
        string s = "";
        vector<string> ans;
        solve(n, ans, s);
        return ans;
    }
    void solve(int n, vector<string>& ans, string& s) {
        if (s.size() == n) {
            ans.push_back(s);
            return;
        }

        s.push_back('1');
        solve(n, ans, s);
        s.pop_back();
        if (s.empty()||s.back() == '1') {
            s.push_back('0');
            solve(n, ans, s);
            s.pop_back();
        }
    }
};