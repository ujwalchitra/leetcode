class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        if (flowerbed.size() == 1 && flowerbed[0] == 0) {
            return true;
        }
        for (int i = 0; i < flowerbed.size(); i = i + 1) {
            if ((i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) ||
                (i == flowerbed.size() - 1 && flowerbed[i] == 0 &&
                 flowerbed[i - 1] == 0)) {
                     flowerbed[i ]=1;
                n--;
            } else if (i > 0 && flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                       flowerbed[i + 1] == 0) {
                         flowerbed[i ]=1;
                n--;
            }
        }
        if (n <= 0) {
            return true;
        } else {
            return false;
        }
    }
};