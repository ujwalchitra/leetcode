class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(char c:s){
            if(c=='a'||c=='A'||c=='e'||c=='E'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U'){
                v.push_back(c);
            }
        }
        sort(v.begin(),v.end());
        string ans = "";
        int b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U') {
                ans += v[b++];
            }
            else{
                ans+=s[i];
            }
        }
        return ans;

    }
};