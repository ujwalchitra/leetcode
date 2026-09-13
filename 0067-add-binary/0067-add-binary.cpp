class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";

        int k = max(a.size(), b.size());
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        while (k > a.size()) {
            a = a + '0';
        
        }
        while (k > b.size()) {
            b = b + '0';
          
        }
        int carry=0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for (int i = a.size() - 1; i >= 0; i--) {
          
            int sum=carry+(a[i]-'0')+(b[i]-'0');
            carry=sum/2;
            s+=to_string(sum%2);
            
        }
        if(carry){
            s.push_back('1');
        }
        reverse(s.begin(),s.end());
        return s;
    }
};