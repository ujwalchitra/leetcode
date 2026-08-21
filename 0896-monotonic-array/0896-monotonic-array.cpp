class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> v;
        vector<int> c;
        int a=0;
        int b=0;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            c.push_back(nums[i]);
        }
        sort(v.begin(), v.end());
        sort(c.rbegin(), c.rend());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != v[i]) {
                a = 1;
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != c[i]) {
                b = 1;
                break;
            }
        }
        if(a==0||b==0){
            return true;
        }else{
            return false;
        }
    }
};