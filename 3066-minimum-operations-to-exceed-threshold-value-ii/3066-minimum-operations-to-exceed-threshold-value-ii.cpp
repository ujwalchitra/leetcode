class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        int a = 0;
        while (pq.top()<k) {
            if (pq.size() < 2) {
                break;
            }
            long  long m = pq.top();
            pq.pop();
            long long n = pq.top();
            pq.pop();
            long long l = (min(m, n) * 2) + (max(m, n));
            pq.push(l);
            a++;
        }
        return a;}
    };