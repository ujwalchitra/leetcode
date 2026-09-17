class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int ans=0;
        int a=prices[0];
        for(int i=1;i<prices.size();i++){
            if(a<prices[i]){
                sum=prices[i]-a;
                ans=max(ans,sum);
            }
            else if (a>prices[i]){
                a=prices[i];
            }
        }
        return ans;
    }
};