class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        int a = 1, b = 0;
        int c = 1, d = 1;
        int na, nb, nc, nd;
        int power = n - 1;
        
        while (power > 0) {
            if (power & 1) {
                na = a * c + b * d;
                nb = a * d + b * (c - d);

                a = na; 
                b = nb;
            }

            nc = c * c + d * d;
            nd = c * d + d * (c - d);

            c = nc;
            d = nd;

            power >>= 1;
        }

        return a;
    }
};