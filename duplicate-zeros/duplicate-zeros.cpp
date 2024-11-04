class Solution {
public:

    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeroCount = 0;

        // Step 1: Count the zeros that would fit within the array length when duplicated.
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                ++zeroCount;
            }
        }

        // Step 2: Shift elements from the end to duplicate zeros in place.
        for (int i = n - 1, j = n + zeroCount - 1; i >= 0; --i, --j) {
            // If j is within the bounds of the array, copy the current element to the new position.
            if (j < n) {
                arr[j] = arr[i];
            }

            // If the current element is zero, we need to duplicate it.
            if (arr[i] == 0) {
                --j;
                if (j < n) {
                    arr[j] = 0;
                }
            }
        }
    }

};