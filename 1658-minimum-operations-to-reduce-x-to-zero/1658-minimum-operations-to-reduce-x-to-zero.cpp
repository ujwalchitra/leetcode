class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }
        sum = sum - x;
        if(sum<0){
            return -1;
        }
        int k = 0;
        int s = 0;
        int e = 0;
        int count = INT_MIN;
        while (e < nums.size()) {
            k = k + nums[e];
            while(k > sum) {
                k = k - nums[s];
                s++;
            }
            if (k == sum) {
                count = max(count, e - s + 1);
            } 
              e++;
        }
        if (count == -2147483648) {
            return -1;
        }

        return nums.size() - count;
    }
};