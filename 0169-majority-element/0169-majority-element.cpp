class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int main = 0;
        int ans = 0;
        if(nums.size()==1){
            return nums[0];
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
                main = max(main, count);

            } else {
                count = 0;
            }
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                main--;
                if (main == 0) {
                    ans = nums[i];
                    break;
                }
            }
        }
        return ans;
    }
};