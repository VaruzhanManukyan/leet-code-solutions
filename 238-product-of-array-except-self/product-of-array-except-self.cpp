class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::size_t size = nums.size();
        std::vector<int> result(size);

        int prefix = 1;
        for (std::size_t i = 0; i < size; ++i) {
            result[i] = prefix;
            prefix *= nums[i];
        }
        
        int suffix = 1;
        for (int i = static_cast<int>(size) - 1; i >= 0; --i) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};