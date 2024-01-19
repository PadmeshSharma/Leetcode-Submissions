#include <vector>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Iterate through the digits from right to left
        for (int i = n - 1; i >= 0; --i) {
            // If the current digit is 9, set it to 0
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                // If the current digit is not 9, increment it and return the result
                digits[i] += 1;
                return digits;
            }
        }

        // If we're here, it means there was a carry all the way to the leftmost digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
