class Solution {
private:
    int rob_1(std::vector<int> nums, int start, int end) {
        std::size_t size = end - start + 1;
        std::vector<int> dp(size + 1, 0);
        dp[0] = 0;
        dp[1] = nums[start];

        for (std::size_t i = 2; i <= size; ++i) {
            dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[start + i - 1]);
        }

        return dp[size];
    }
public:
    int rob(vector<int>& nums) {
        std::size_t size = nums.size();
        if (size == 1) {
            return nums[0];
        }

        return std::max(rob_1(nums, 0, nums.size() - 2), rob_1(nums, 1, nums.size() - 1));
    }
};