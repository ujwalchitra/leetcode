class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        solve(left,right,s);
        

    }
    void solve(int left,int right,vector<char>& s){
        if(left>=right){
            return ;
        }
        swap(s[left],s[right]);
        solve(left+1,right-1,s);
    }
};