/*class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
          int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i+1]<nums[i])
            {
                return i;
            }
        }
        return i;
    }
};*/

class Solution {
public:
  int findPeakElement(const vector<int> &num) {
    int l = 0, r = num.size()-1;
    
    while(l < r){
      int m = (l + r) >> 1;
      
      if(num[m] < num[m+1]) l = m + 1;
      else r = m;
    }
    
    return l;
  }
};