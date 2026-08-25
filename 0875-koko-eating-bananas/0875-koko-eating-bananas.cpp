class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int count=0;
        
        sort(piles.begin(),piles.end());
    
        int i=0;
        int left=1;
        int high=piles[piles.size()-1];
        int ans=INT_MAX;
        while(left<=high){
            int mid=(left+high)/2;
            long long k=solve(mid,piles);
            if(k<=h){
                high=mid-1;
                ans=min(ans,mid);
            }
            if(k>h){
                left=mid+1;
            }
 

        }
        return ans;
    }
    long long solve(int i,vector<int>& piles){
        long long count=0;
        for(int j=0;j<piles.size();j++){
           count=count+(piles[j] + i - 1) / i;;
        }
        return count;
    }
};