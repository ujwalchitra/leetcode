class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {
            int x=1;
            while(asteroids[i]<0&&!st.empty()&&x==1&&st.top()>=0){
                if(abs(asteroids[i])>abs(st.top())){
                   st.pop();
                }
                else if(abs(asteroids[i])==abs(st.top())){
                    st.pop();
                    x=0;
                }
                else{
                    x=0;
                }
            }
            if(x==1){
                st.push((asteroids[i]));
            }
        }

    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(),v.end());
    return v;
}
}
;