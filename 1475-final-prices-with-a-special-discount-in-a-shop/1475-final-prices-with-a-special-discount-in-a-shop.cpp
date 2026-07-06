class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;

        for(int i=0;i<prices.size();i++){
            int a=0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    v.push_back(prices[i]-prices[j]);
                    a=1;
                    break;
                }
            }                if(a!=1){
                    v.push_back(prices[i]);
                }
        }
        return v;
    }
};