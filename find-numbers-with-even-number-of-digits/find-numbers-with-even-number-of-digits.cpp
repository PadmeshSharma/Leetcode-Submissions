class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            // Directly check the number of digits
            int digits = std::to_string(num).length();
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
