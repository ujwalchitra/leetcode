class Solution {
public:
    string reverseWords(string s) {
        string a="";
        vector<string>v;
       
        for(int i=0;i<s.size();i++){

            if(s[i]!=' '){
                a+=s[i];
            }
            else if(s[i]==' '&& a.size()>0){
                v.push_back(a);
                a="";
            }
            else{
                continue;
            }


        }
        if(a.size()>0){
            v.push_back(a);
        }
        int left=0;
        int right=v.size()-1;
        while(left<=right){
            swap(v[left],v[right]);
            left++;
            right--;
        }
        string g="";
        for(int i=0;i<v.size();i++){
            g+=v[i]+" ";
        }
        g.pop_back();

        return g;



    }
};