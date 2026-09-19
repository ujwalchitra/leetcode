class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){
            return s.size();
        }
        int left=0;
        int sum=0;
        unordered_map<char,int>m;
        for(int right=0;right<s.size();right++){
            if(m.find(s[right])!=m.end()){
                left=max(left,m[s[right]]+1);
            }
            m[s[right]]=right;
            sum=max(sum,right-left+1);
        }
        return sum;
    }
};