class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false; // Rule 1: Needs at least 3 elements.

        int i = 0;
        // Walk up to find the peak.
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }
        
        // i should not be the first or last element, as it would mean no peak.
        if (i == 0 || i == n - 1) return false;

        // Walk down to check the decreasing sequence.
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        // If we've reached the end, it's a valid mountain array.
        return i == n - 1;
    }
};
