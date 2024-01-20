class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int count1=0,count2=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]>0 )
            {
                count1++;
            }
            if(nums[i+1]-nums[i]<0)
            {
                count2++;
            }
        }
        if(count1!=0 && count2!=0)
        {
            return false;
        }
        return true;
    }
};