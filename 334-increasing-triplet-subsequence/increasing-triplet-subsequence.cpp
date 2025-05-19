class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;  // smallest so far
            } else if (num <= second) {
                second = num;  // second smallest
            } else {
                // Found third number greater than both
                return true;
            }
        }

        return false;
    }
};
