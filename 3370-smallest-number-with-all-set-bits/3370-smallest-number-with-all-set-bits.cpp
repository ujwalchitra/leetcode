class Solution {
public:
    int smallestNumber(int n) {
        string s="";
        while(n>0){
            s+=n%2+'0';
            n=n/2;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s[i]='1';
            }
        }
        int j=0;
        int sum=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                sum=sum+pow(2,j);
            }
            j++;
        }
        return sum;
    }
};