class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        long long sum=0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum +nums[i];
        }
        double b=sum/2.0;
        int k=0;
        double sum1=sum;
        while (true) {
            double a=pq.top()/2.0;
            pq.pop();
            pq.push(a);
            sum1=sum1-a;
            k++;
            double sum2=sum-sum1;
            if(sum2>=b){
               break;

            }
        } 
        return k;
    }
};