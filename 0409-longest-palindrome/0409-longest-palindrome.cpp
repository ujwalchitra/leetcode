class Solution {
public:
    int longestPalindrome(string s) {
        set<int> st;
        st.insert(s[0]);
        int count = 0;
        for (int i = 1; i < s.size(); i++) {
            auto it = st.find(s[i]);

            if (it != st.end()) {
                st.erase(it);
                 count = count + 2;
            }
             else {
                st.insert(s[i]);
            }
        }
        if(st.size()>0){
            count++;
        }
        return count;
    }
};