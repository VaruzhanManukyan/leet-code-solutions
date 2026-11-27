class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        for (int i = 1; i < nums.size() && nums[i] == nums[i - 1] + 1; ++i) {
            sum += nums[i];
        }

        std::unordered_set<int> set(nums.begin(), nums.end());

        while (set.contains(sum)) {
            ++sum;
        }

        return sum;
    }
};