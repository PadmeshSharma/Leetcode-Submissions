class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Step 1: Calculate prefix products
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            result[i] = prefix;
            prefix *= nums[i];  // Update the prefix product
        }

        // Step 2: Calculate suffix products and multiply with result
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= suffix;  // Multiply current result with the suffix product
            suffix *= nums[i];    // Update the suffix product
        }

        return result;
    }
};