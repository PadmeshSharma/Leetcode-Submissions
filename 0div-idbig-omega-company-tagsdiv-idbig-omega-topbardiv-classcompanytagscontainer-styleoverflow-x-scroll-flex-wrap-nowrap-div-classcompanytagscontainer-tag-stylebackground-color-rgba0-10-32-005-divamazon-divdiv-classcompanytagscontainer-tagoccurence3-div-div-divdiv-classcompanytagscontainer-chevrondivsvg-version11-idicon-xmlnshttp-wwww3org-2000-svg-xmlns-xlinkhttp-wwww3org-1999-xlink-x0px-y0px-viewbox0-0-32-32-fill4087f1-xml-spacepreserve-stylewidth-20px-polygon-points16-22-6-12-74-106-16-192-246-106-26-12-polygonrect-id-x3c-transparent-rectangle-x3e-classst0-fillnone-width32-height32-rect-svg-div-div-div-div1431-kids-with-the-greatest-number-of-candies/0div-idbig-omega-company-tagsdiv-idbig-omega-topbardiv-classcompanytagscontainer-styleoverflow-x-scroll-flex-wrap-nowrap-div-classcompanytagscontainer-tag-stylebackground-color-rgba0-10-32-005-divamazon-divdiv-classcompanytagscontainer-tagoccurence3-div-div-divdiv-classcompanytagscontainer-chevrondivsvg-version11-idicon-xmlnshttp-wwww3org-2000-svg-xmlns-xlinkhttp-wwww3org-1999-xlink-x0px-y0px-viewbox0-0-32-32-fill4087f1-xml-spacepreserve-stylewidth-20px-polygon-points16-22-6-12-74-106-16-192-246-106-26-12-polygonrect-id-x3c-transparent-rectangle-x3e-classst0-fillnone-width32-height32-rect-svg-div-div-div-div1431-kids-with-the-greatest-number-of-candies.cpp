class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int a,maxi=INT_MIN;
        vector<bool> result;
        for(int i=0;i<candies.size();i++)
        {
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++)
        {
            a=(candies[i]+extraCandies)>=maxi?1:0;
            result.push_back(a);
        }
        return result;
    }
};