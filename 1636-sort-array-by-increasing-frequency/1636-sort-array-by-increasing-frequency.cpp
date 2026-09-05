class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
               priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> pq;
        vector<int>ans;
        for (const auto& pair : m) {
            pq.push({pair.second, -pair.first});
        }
        while (!pq.empty()) {
            int freq = pq.top().first;

            while(freq--){
            ans.push_back(-pq.top().second);}
            pq.pop();
        }
       
        return ans;
    }
};