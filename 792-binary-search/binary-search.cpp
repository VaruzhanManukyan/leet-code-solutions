class Solution {
public:
    int search(vector<int>& nums, int target) {
        short left = 0;
        short right = static_cast<short>(nums.size() - 1);

        while (left <= right) {
            short mid = right - (right - left) / 2;

            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                return static_cast<int>(mid);
            }
        }

        return -1;
    }
};