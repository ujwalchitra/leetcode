class Solution {
public:
    int fillCups(vector<int>& amount) {
        int a = 0;
        while (amount.size() != count(amount.begin(), amount.end(), 0)) {
            sort(amount.begin(), amount.end());
            while (amount[0] == 0) {
                amount.erase(amount.begin());
            }
            if (amount.size() > 1) {
                amount[0] = amount[0] - 1;
                amount[amount.size() - 1] = amount[amount.size() - 1] - 1;
                a++;
            }
            else{
                 amount[0] = amount[0] - 1;
                 a++;
            }
        }
        return a;
    }
};