class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long k = 1;
        while (k<=n) {
            if (n == k) {
                return true;
                
            } 
            else {
           k=  k << 1;
            }
        }
        return false;
    }
};