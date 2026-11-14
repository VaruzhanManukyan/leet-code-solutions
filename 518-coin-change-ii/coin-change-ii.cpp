class Solution {
public:
    int change(int amount, vector<int>& coins) {
        std::vector<unsigned int> dp(amount + 1, 0);

        dp[0] = 1;

        for (int coin : coins) {
            for (int sum = coin; sum <= amount; ++sum) {
                    dp[sum] += dp[sum - coin];
            }
        }

        return static_cast<int>(dp[amount]);
    }
};