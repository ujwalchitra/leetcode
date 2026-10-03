class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        int a = height[0];
        int b = height[height.size() - 1];
        right.push_back(b);
        left.push_back(a);
        for (int i = 1; i < height.size(); i++) {
            if (a >= height[i]) {
                left.push_back(a);
            } else {
                left.push_back(a);
                a = height[i];
            }
        }
        for (int i = height.size()-2; i >=0; i--) {
            if (b >= height[i]) {
                right.push_back(b);
            } else {
                right.push_back(b);
                b = height[i];
            }
        }reverse(right.begin(), right.end());
         int sum=0;
         for(int i=0;i<right.size();i++){
            cout<<right[i];
         }
         for(int i=0;i<height.size()-1;i++){
              if(min(left[i],right[i])-height[i]>=0){
            sum+=min(left[i],right[i])-height[i];}
         }

        return sum;
    }
};