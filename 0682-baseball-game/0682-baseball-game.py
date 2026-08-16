class Solution:
    def calPoints(self, operations: List[str]) -> int:
        st=[]
        
        for i in range(len(operations)):
            if operations[i]=='C' and st:
                st.pop()
            elif operations[i]=='D' and st:
                a=int(st[-1])
                a=a*2
                st.append(a)
            elif operations[i]=='+' and st:
                b=st[-1]
                st.pop()
                c=st[-1]
                st.append(b)
                st.append(b+c)
            else:
                st.append(int(operations[i]))
        k=0
        while(st):
            k=k+st[-1]
            st.pop()
        return k

             
        