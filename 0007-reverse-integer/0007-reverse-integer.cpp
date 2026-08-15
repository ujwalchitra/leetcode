class Solution {
public:
    int reverse(int x) {
        int s=1;
        long long a;
        a=x;
        if(x<0){
            s=-1;
             a=-a;
            
        }
        
        
        long long num=0;
        while(a>0){
            num=num*10+(a%10);
            a=a/10;
        
            if(num>=pow(2,31)-1){
                return 0;
            }
        }
        return num*s;
    }
};