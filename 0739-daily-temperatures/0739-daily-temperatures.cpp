class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v;
        v.push_back(0);
        stack<pair<int, int>> st;
        st.push(
            {temperatures[temperatures.size() - 1], temperatures.size() - 1});
        for (int i = temperatures.size() - 2; i >= 0; i--) {

            while (!st.empty() && temperatures[i] >= st.top().first) {
                st.pop();
            }
            if (!st.empty() && temperatures[i] < st.top().first) {
                v.push_back(st.top().second - i);
                st.push({temperatures[i],i});
            }
            else{
                st.push({ temperatures[i] ,i});
                v.push_back(0);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};