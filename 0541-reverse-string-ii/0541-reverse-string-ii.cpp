class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()<k){
            reverse(s.begin(),s.end());
            return s;
        }
        if(s.size()<2*k && s.size()>=k){
           int left=0;
           int right=k-1;
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            return s;
        }
        for(int i=0;i<s.size();i=i+2*k){
            int left=i;
            int right = min(i + k - 1, (int)s.size() - 1);
            while(left<right &&right<=s.size()){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
        
    }
};