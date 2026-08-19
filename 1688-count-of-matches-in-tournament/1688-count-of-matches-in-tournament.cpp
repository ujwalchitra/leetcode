class Solution {
public:
    int numberOfMatches(int n) {
        long long sum=0;
        while(n>1){
            if(n%2==0){
                sum=sum+n/2;
                n=n/2;
            }
            else if(n%2!=0){
                sum=sum+(n-1)/2;
                n=(1+n)/2;
            }
        }
        return sum;
    }
};