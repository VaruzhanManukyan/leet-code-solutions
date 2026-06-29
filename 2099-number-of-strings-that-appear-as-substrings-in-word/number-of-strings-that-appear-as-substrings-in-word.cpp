class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        std::size_t count = 0;

        for (auto& pattern : patterns) {
            if (word.find(pattern) != string::npos) {
                ++count;
            }
        }

        return count;
    }
};