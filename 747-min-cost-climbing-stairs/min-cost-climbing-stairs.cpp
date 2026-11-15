class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        std::size_t size = cost.size();
        std::vector<int> dp(size, 0);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < size; ++i) {
            dp[i] = std::min(dp[i - 2], dp[i - 1]) + cost[i];
        }

        return std::min(dp[size - 1], dp[size - 2]);
    }
};