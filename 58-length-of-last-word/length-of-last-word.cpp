class Solution {
public:
    int lengthOfLastWord(string s) {
        short i = static_cast<short>(s.size()) - 1;

        while (i >= 0 && s[i] == ' ') {
            --i;
        }

        int sum = 0;

        while (i >= 0 && s[i] != ' ') {
            --i;
            ++sum;
        }

        return sum;
    }
};