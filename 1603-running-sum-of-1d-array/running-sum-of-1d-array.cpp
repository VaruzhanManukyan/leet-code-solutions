class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector<int> vector(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); ++i) {
            vector[i] += vector[i - 1]; 
        }

        return vector;
    }
};