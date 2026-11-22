class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        long long a = 1, b = 0;
        long long c = 1, d = 1;

        int power = n - 1;
        
        while (power > 0) {
            if (power & 1) {
                long long na = a * c + b * d;
                long long nb = a * d + b * (c - d);

                a = na; 
                b = nb;
            }

            long long nc = c * c + d * d;
            long long nd = c * d + d * (c - d);

            c = nc;
            d = nd;

            power >>= 1;
        }

        return static_cast<int>(a);
    }
};