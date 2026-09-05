class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        string ans = "";
        for (const auto& pair : m) {
            pq.push({pair.second,pair.first});
        }
        while(!pq.empty()){
          ans.append(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};