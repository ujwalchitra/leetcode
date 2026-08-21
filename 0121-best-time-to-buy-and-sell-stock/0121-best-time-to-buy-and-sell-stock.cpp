class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int start=prices[0];
       int sum=0;
       for(int i=1;i<prices.size();i++){
        if(start>prices[i]){
            start=prices[i];
        }
        else if(start<prices[i]){
            sum=max(sum,prices[i]-start);
        }
       }
       return sum;
    }
};