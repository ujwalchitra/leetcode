class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        long long sum=1;
        while(k>0){
            int a=pq.top();
            pq.pop();
            a++;
            pq.push(a);
            k--;
        }
        int mod=1000000007;
        while(!pq.empty()){
            sum=sum*pq.top();
            sum=sum%mod;
            pq.pop();
        }
        return sum;
    }
};