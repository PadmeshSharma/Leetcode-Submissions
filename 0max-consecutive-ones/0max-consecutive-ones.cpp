#include <vector>
#include <algorithm>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int maxConsecutiveOnes = 0;
        int currentConsecutiveOnes = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentConsecutiveOnes++;
            } else {
                maxConsecutiveOnes = std::max(maxConsecutiveOnes, currentConsecutiveOnes);
                currentConsecutiveOnes = 0; // Reset count when encountering 0
            }
        }

        // Check for the last sequence of consecutive 1's
        maxConsecutiveOnes = std::max(maxConsecutiveOnes, currentConsecutiveOnes);

        return maxConsecutiveOnes;
    }
};
