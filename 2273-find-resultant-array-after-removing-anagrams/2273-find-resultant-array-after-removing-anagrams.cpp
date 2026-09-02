class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        for (int i = 1; i < n; i++) {
            if(solve(words[i],words[i-1])==true){
                words.erase(words.begin()+i);
                i--;
                n--;
            }
        }
        return words;
    }
    bool solve(string a, string b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            return true;
        } else {
            return false;
        }
    }
};