class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans+nums[i];
            arr.push_back(ans);
        }
        return arr;
    }
    
};