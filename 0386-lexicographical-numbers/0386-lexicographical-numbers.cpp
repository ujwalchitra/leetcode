class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        int a=1;
        for(int i=1;i<=n;i++){
            v.push_back(a);
            if(a*10<=n){
                a=a*10;
            }
            else{
                while(a%10==9 ||a==n){
                    a=a/10;
                }
                a++;
            }
        }
        return v;
    }
};