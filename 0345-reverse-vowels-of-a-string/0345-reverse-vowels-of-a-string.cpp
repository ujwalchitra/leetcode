class Solution {
public:
    string reverseVowels(string s) {
        vector<char> a;
        for(int i=0;i<s.size();i++){
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
            s[i] == 'u' || s[i] == 'U') {
            a.push_back(s[i]);
        }}
        reverse(a.begin(), a.end());
        string ans = "";
        int b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U') {
                ans += a[b++];
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};