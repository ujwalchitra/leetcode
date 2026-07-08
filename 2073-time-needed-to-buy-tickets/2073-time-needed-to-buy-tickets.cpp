class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        int i=0;
        while(tickets[k]!=0){
            while(tickets[i%tickets.size()]==0){
                 i=i%tickets.size()+1;
            }
            tickets[i%tickets.size()]--;
            i++;
            count++;
        }
        return count;
    }
};