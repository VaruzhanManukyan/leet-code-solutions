class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        int i = 1;
        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            ++i;
        }

        std::unordered_set<int> set(nums.begin(), nums.end());

        while (set.count(sum)) {
            ++sum;
        }

        return sum;
    }
};