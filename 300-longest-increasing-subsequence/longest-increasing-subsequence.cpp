class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::size_t size = nums.size();
        std::vector<int> dp(size, 1);

        int result = 1;
        for (std::size_t i = 1; i < size; ++i) {
            for (std::size_t j = 0; j < i; ++j) {
                if (nums[j] < nums[i]) {
                    dp[i] = std::max(dp[i], dp[j] + 1);
                }
            }
            result = std::max(result, dp[i]);

        }

        return result;
    }
};