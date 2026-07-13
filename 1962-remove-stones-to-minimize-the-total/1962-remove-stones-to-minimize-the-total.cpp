class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        while(k>0){
            if(pq.top()==0){
                break;
            }
            int a=pq.top();
             int c=pq.top();
            pq.pop();
            a=a/2;
            int b=c-a;
            pq.push(b);
            k--;
        }
        int sum=0;
        while(!pq.empty()){
            sum=sum+pq.top();
            pq.pop();
        }
        return sum;
    }
};