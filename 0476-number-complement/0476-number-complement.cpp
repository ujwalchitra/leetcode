class Solution {
public:
    int findComplement(int num) {
        string s = "";

        while (num > 0) {
            s += (num % 2) + '0';
            if (s.back() == '1') {
                s.back() = '0';
            } else {
                s.back() = '1';
            }
            num = num / 2;
        }
       
        reverse(s.begin(),s.end());
        int j=0;
        int sum=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
              sum=sum+pow(2,j);
              cout<<sum;
            }
            j++;
        }
        return sum;
    }
};