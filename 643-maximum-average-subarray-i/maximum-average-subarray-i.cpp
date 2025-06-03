class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;

        // First window
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        
        // Slide the window
        double maxSum = sum;
        for(int i = k; i < nums.size(); i++){
            // remove left, add right           
            sum += nums[i] - nums[i - k];  

            maxSum = max(maxSum, sum);                      
        }

        return maxSum / k;
    }
};