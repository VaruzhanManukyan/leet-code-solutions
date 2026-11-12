class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        std::size_t size_row = text1.size();
        std::size_t size_column = text2.size();
        std::vector<std::vector<int>> dp(size_row + 1, std::vector<int>(size_column + 1, 0));

        for (std::size_t i = 1; i <= size_row; ++i) {
            for (std::size_t j = 1; j <= size_column; ++j) {
                dp[i][j] = text1[i - 1] == text2[j - 1] ? dp[i - 1][j - 1] + 1 : std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[size_row][size_column];
    }
};