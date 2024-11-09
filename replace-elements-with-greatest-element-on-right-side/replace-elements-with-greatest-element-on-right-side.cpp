class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxSoFar = -1;  // Initialize the max element on the right as -1 for the last element
        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];  // Temporarily store the current element
            arr[i] = maxSoFar;      // Replace with the max element to the right
            maxSoFar = max(maxSoFar, current);  // Update maxSoFar
        }
        return arr;
    }
};