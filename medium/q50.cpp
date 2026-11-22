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

// here how it works so we are converting the power into binary first ex -- if n =13 we make it 1101 in binary .
// as we know if x =2 then pow (2.13 ) will be 2^13 = 2^(1*2^3 + 1*2^2 + 0*2^1 + 1*2^0) = 2^8 * 2^4 * 2^0 = 4096 * 16 * 1 = 65536
//  i means we can multiply the result with x only when the bit is 1 and we can square the x for every bit we move to the right.

