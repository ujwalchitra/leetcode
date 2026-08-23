class Solution {
public:
    bool checkDivisibility(int n) {
        string a=to_string(n);
        int sum=0;
        long long  pr=1;
        for(int i=0;i<a.size();i++){
            sum=sum+(a[i]-'0');
            pr=pr*(a[i]-'0');
        }
        sum=sum+pr;
        if(n%sum==0){
            return true;
        }else{
            return false;
        }
    }
};