class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(char c:s){
            if(!st.empty() && c=='0' ||c=='1' ||c=='2' ||c=='3' ||c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9'){
               st.pop();
            }
            else if(st.empty() && c=='0' ||c=='1' ||c=='2' ||c=='3' ||c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9'){
                continue;
            }
            else{
                st.push(c);
            }
        }
        string ans="";
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};