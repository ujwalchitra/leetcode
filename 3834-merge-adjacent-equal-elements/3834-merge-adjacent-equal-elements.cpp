class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> st;

        for (int x : nums) {
            st.push_back(x);

            while (st.size() >= 2 &&
                   st.back() == st[st.size() - 2]) {

                long long val = st.back();
                st.pop_back();
                st.pop_back();

                st.push_back(val * 2);
            }
        }

        return st;
    }
};