class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            // Check if the current plot is empty
            if (flowerbed[i] == 0) {
                // Check the left and right plots
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    // Plant a flower
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0) return true;
                }
            }
        }

        return n <= 0;
    }
};
