class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int count = 1;
        if(chars.size()<=1){
            return chars.size();
        }
        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == chars[i - 1]) {
                count++;

            } else if (chars[i] != chars[i - 1] && count >= 2) {
                s += chars[i-1] + to_string(count);
                count = 1;
            } else if (chars[i] != chars[i - 1] && count == 1) {
                s += chars[i-1];
            }   
             
        }
        if(count>1){
            
            s+=chars[chars.size()-1];
            s+=to_string(count);
        }
                if(count==1){
            
            s+=chars[chars.size()-1];
            
        }
        chars.clear();
        for (int i = 0; i < s.size(); i++) {
            
            chars.push_back(s[i]);
            cout<<s[i];
           
        }
        return chars.size();
    }
};