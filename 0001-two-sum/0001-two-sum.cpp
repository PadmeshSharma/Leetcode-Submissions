/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        pair<int,int> p;
        vector<int> arr[10];
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    p.first=i;
                    p.second=j;
                }
            }
        }
        return p;
    }
};*/
#include <unordered_map>
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1, -1};
    }
};
