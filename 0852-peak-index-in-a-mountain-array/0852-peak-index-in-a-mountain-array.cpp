class Solution {
public:
    //Approach pf binary search with O(logn)
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int s = 0, e = arr.size() - 1;
        int mid=s+(e-s) / 2;
        while (s < e)
        {
            if(arr[mid] < arr[mid+1])
                    s=mid+1;
                else
                    e = mid;

            mid = s+(e-s) / 2;
        }
        return s;
    }
};


//Approach pf linear search with O(n)
/*class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int i;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i+1]<arr[i])
            {
                return i;
            }
        }
        return i;
    }
};*/
