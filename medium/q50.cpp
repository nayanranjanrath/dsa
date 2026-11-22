class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            N = -N;
        }
        double result = 1.0;
        while (N > 0) {
            if (N & 1) result *= x;
            x *= x;
            N >>= 1;
        }
        return (n < 0) ? 1.0 / result : result;
    }
};   