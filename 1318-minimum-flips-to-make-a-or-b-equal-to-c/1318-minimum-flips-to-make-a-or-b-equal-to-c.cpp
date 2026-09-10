class Solution {
public:
    int minFlips(int a, int b, int c) {
        string s = "";
        string k = "";
        string g = "";
        while (a > 0) {
            s += (a % 2) + '0';
            a = a / 2;
        }
        while (b > 0) {
            k += (b % 2) + '0';
            b = b / 2;
        }
        while (c > 0) {
            g += (c % 2) + '0';
            c = c / 2;
        }
        int n = s.size();
        int m = k.size();
        int l = g.size();

        int maxi = max({n, m, l});

        while (s.size() < maxi) {
            s.push_back('0');
        }

        while (k.size() < maxi) {
            k.push_back('0');
        }

        while (g.size() < maxi) {
            g.push_back('0');
        }
        reverse(s.begin(), s.end());
        reverse(k.begin(), k.end());
        reverse(g.begin(), g.end());
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (g[i] == '0' && s[i] == '1' && k[i] == '0') {
                count++;
                cout<<count;
            } else if (g[i] == '0' && s[i] == '0' && k[i] == '1') {
                count++;
                
            } else if (g[i] == '0' && s[i] == '1' && k[i] == '1') {
                count = count + 2;
               
            } else if (g[i] == '1' && s[i] == '0' && k[i] == '0') {
                count++;
                cout<<count;
            }
        }
        return count;
    }
};