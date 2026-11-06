class Solution {
    public boolean isHappy(int n) {
       if( solve(n)==1){
        return true;
       }
       return false; 
    }
    int solve(int n){
        int ans=0;
        while(n!=0){
            ans+=(n%10)*(n%10);
            n=n/10;
        }
        if(ans==1){
            return 1;
        }
        if(ans==4){
            return 0;
        }
       return solve(ans);
    }
}