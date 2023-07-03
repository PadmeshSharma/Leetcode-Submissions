/*class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int ansj=0,ansk=0,k;
        for(int i=0;i<nums.size();i++)
        {
             for(int j=0;j<nums.size();j++)
            {
                 ansj=ansj+nums[j];
                 for(k=(nums.size()-1);k>0;k--)
                {  
                   ansk=ansk+nums[i];
                   if (ansj==ansk)
                   {
                       return k-2;
                   }
                    else
                        return -1;
                }
             }
        }
        return k;
    }
};
*/
// Time Complexity : O(n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // Initialize rightSum to store the sum of all the numbers strictly to the index's right...
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        // Initialize leftSum to store the sum of all the numbers strictly to the index's left...
        int leftSum = 0;
        // Traverse all elements through the loop...
        for (int idx = 0; idx < nums.size(); idx++) {
            // subtract current elements with from rightSum...
            rightSum -= nums[idx];
            // If the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right...
            if (leftSum == rightSum)
                return idx;     // Return the pivot index...
            // add current elements with leftSum...
            leftSum += nums[idx];
        }
        return -1;      // If there is no index that satisfies the conditions in the problem statement...
    }
};

