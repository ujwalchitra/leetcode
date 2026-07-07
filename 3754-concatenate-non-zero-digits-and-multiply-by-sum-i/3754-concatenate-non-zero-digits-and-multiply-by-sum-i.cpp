class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        int sum=0;
        if(n==0){
            return 0;
        }
        string ans="";
        for(char c:s){
            if(c!='0'){
                ans+=c;
              sum=sum+c-'0';  
            }
        }
        return 1LL*stoi(ans)*sum;

    }
};