class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums[i] = -1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            nums[i] = sum;

            cout << nums[i];
        }
        int ans=0;
        m[0] = -1;

        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                ans=max(ans,i - m[nums[i]]);
            }

            else{
                m.insert({nums[i], i});
            }
        }
        return ans;
        
    }
};