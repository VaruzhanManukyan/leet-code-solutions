class Solution {
public:
    int search(vector<int>& nums, int target) {
        short left = 0;
        short right = static_cast<short>(nums.size() - 1);

        while (left <= right) {
            if (nums[right - (right - left) / 2] > target) {
                right = (right - (right - left) / 2) - 1;
            } else if (nums[right - (right - left) / 2] < target) {
                left = (right - (right - left) / 2) + 1;
            } else {
                return static_cast<int>(right - (right - left) / 2);
            }
        }

        return -1;
    }
};