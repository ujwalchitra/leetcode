class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int>v(nums.size(),0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(k>0){
            int a=pq.top().first;
            int b=pq.top().second;
            pq.pop();
            pq.push({a*multiplier,b});
            k--;
        }
        for(int i=0;i<nums.size();i++){
              int a=pq.top().first;
            int b=pq.top().second;
            pq.pop();
            v[b]=a;
        } 
        return v;
    }
};