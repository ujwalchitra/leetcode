class Solution {
public:
    int smallestIndex(vector<int>& nums) {
    int a=-1;
    for(int i=0;i<nums.size();i++){
        if(solve(nums[i],i)==true){
            a=i;
            break;
        }
    }
    return a;


    }
    bool solve(int n,int i){
        int sum=0;
        while(n>=1){
            sum=sum+n%10;
            n=n/10;
        }
        if(sum==i){
            return true;
        }else{
            return false;
        }
        
    }
};