class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while (k > 0) {
            sort(gifts.begin(), gifts.end());
            if (gifts[gifts.size() - 1] == 0) {
                break;
            } else {
                gifts[gifts.size() - 1] = abs(sqrt(gifts[gifts.size() - 1]));
                k--;
            }
        }
        long long sum = 0;
        for (int i = 0; i < gifts.size();i++){
            sum=sum+gifts[i];
        }
        return sum;
    }
};