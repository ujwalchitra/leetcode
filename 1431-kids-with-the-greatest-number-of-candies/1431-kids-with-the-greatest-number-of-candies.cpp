class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int maxi=0;
        for(int i=0;i<candies.size();i++){
            maxi=max(candies[i],maxi);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi){
                v.push_back(true);
            }else{
                v.push_back(false);
            }
        }
        return v;
    }
};