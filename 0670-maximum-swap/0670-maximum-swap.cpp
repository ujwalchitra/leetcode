class Solution {
public:
    int maximumSwap(int num) {
        int a=num;
        string k=to_string(num);
        for(int i=0;i<k.size();i++){
            for(int j=i+1;j<k.size();j++){
                if((k[i]-'0')<(k[j]-'0')){
                    swap(k[i],k[j]);
                    a=max(a,stoi(k));
                    swap(k[i],k[j]);
                }
            }
        }
        return a;
    }
};