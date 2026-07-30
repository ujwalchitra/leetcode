class Solution {
public:
    struct cmp {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) const {
            if (a.first == b.first)
                return a.second > b.second;

            return a.first < b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        vector<string> v;

        priority_queue<
            pair<int, string>,
            vector<pair<int, string>>,
            cmp
        > n;

        for (int i = 0; i < words.size(); i++) {
            m[words[i]]++;
        }

        for (auto const& p : m) {
            n.push({p.second, p.first});
        }

        while (k > 0 && !n.empty()) {
            v.push_back(n.top().second);
            n.pop();
            k--;
        }

        return v;
    }
};