class Solution {
public:
    bool detectCapitalUse(string word) {
        string a = "";
        string b = "";
        string c = "";
        for (char c : word) {
            a += toupper(c);
        }
        for (char c : word) {
            b += tolower(c);
        }
        c+=toupper(word[0]);
        for(int i=1;i<word.size();i++){
            c+=tolower(word[i]);
        }
        if (word == a || word == b ||word == c) {
            return true;
        } else {
            return false;
        }
    }
};