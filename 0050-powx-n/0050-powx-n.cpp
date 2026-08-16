class Solution {
public:
    double myPow(double x, int n) {
        long long ex=n;
        if(ex<0){
            ex=-ex;
            x=1/x;
        }
        double ans=1.0;
        return pow(x,ex,ans);

    }
    double pow(double x,long long ex,double &ans){
        if(ex==0){
            return ans;
        }
        if(ex%2!=0){
            ans=ans*x;
        }
        return pow(x*x,ex/2,ans);
    

    }
};