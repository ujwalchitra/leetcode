class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for (int i = 0; i < words.size(); i++) {
            m[words[i]]++;
        }
        vector<string> ans;

        int i = 0;
        while (k > 0) {
            int freq = 0;
            string s = "";
            for (const auto& pair : m) {
                if (pair.second > freq) {
                    freq = pair.second;
                    s = pair.first;
                } else if (pair.second == freq && pair.first < s) {
                    s = pair.first;
                }
                i++;
            }
            k--;
            m.erase(s);
            ans.push_back(s);
        }

        return ans;
    }
};