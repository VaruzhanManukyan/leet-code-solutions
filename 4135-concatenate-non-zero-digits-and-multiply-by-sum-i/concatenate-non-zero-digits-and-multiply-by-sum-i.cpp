class Solution {
public:
    long long sumAndMultiply(int n) {
        long long number = 0;
        long long revert = 0;
        short sum = 0;

        while (n) {
            char temp = n % 10;
            n /= 10;

            if (temp != 0) {
                sum += temp;
                revert = revert * 10 + temp;
            }
        }

        while (revert) {
            number = number * 10 + revert % 10;
            revert /= 10;
        }

        return number * sum;
    }
};