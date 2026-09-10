class Solution {
public:
    int minBitFlips(int start, int goal) {
	string s = "";
	string k = "";
	while (start>0) {
		s += (start%2) + '0';
		start = start/2;
	}
	while (goal>0) {
		k += (goal%2) + '0';
		goal = goal/2;
	}
	int n = s.size();
	int m = k.size();
	while(n>m) {
		k.push_back('0');
		m++;
	}
	while(n<m) {
		s.push_back('0');
		n++;
	}
	reverse(s.begin(), s.end());
	reverse(k.begin(), k.end());
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=k[i]){
            count++;
        }
    }
    return count;


    }
};