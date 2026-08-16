class Solution:
    def isValid(self, s: str) -> bool:

        st=[]
        for i in range(len(s)):
            if s[i]=='('or s[i]=='['or s[i]=='{':
                st.append(s[i])
            elif s[i]==')' and st and st[-1]=='(':
                st.pop()
            elif s[i]==']' and st and st[-1]=='[':
                st.pop()
            elif s[i]=='}' and st and  st[-1]=='{':
                st.pop()
            else:
                return False
        if(st):
            return False
        else:
            return True