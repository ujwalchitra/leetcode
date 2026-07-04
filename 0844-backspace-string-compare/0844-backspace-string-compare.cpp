class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> kt;

        for (char c : s) {
            if (c == '#') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!kt.empty())
                    kt.pop();
            } else {
                kt.push(c);
            }
        }

        string ans = "";
        string bms = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        while (!kt.empty()) {
            bms += kt.top();
            kt.pop();
        }
        reverse(bms.begin(), bms.end());

        if (ans == bms) {
            return true;
        } else {
            return false;
        }
    }
};