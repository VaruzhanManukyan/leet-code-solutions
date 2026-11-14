class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for (const auto& num : nums) {
            total += num;
        }

        if (total % 2 != 0) {
            return false;
        }

        int target = total / 2;
        std::vector<bool> dp(target + 1, false);
        dp[0] = true;

        for (const auto& num : nums) {
            for (int i = target - num; i >= 0; --i) {
                if (dp[i]) {
                    dp[num + i] = true;
                }
            }
        }

        return dp[target];
    }
};