class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v;
        vector<int> a = nums;
        sort(a.begin(), a.end());
        int k = a[a.size() - 1];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == k) {
                v.push_back(-1);
            } else {
                v.push_back(nums[i] * 2);
            }
        }
        sort(v.begin(),v.end());
        int m=v[v.size()-1];
        if(k<m){
            return -1;
        }
        int n=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){
                n=i;
            }
        }
        return n;
    }
};