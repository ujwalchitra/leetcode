class Solution {
public:
    long long countSubstrings(string s, char c) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                count++;
            }
        }
        if(count==0){
            return 0;
        }
        long long sum=0;
        while(count>0){
            sum=sum+count;
            count--;
        }
        return sum;
    }
};