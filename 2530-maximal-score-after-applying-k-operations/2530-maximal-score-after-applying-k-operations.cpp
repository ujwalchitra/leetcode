class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        long long ans=0;
        while(k>0){
            if(pq.top()==0){
                break;
            }
            ans=ans+pq.top();
            int a=pq.top();
            pq.pop();
              pq.push(ceil(a/3.0));
            k--;
        }
        return ans;
    }
};