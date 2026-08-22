class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mult = 1;
        int temp = n;
        while (n > 0) {
            char c = n % 10;
            n /= 10;
            sum += c;
            mult *= c;
        }

        return temp % (sum + mult) == 0; 
    }
};