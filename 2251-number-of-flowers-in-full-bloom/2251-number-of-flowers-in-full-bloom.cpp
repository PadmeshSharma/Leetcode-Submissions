/*class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
    { 
        vector<int> v;
        for(int i=0;i<people.size();i++)
        {   int count=0;
            for(int j=0;j<flowers.size();j++)
            {
                if(flowers[j][0]<=people[i] && people[i]<=flowers[j][1])
                {
                    count++;
                }    
            }  v.push_back(count);    
        }
    return v;
    }
};*/
    class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        vector<int> start, end;
        for (auto& t : flowers)
            start.push_back(t[0]), end.push_back(t[1]);
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        vector<int> res;
        for (int t : persons) {
            int started = upper_bound(start.begin(), start.end(), t) - start.begin();
            int ended = lower_bound(end.begin(), end.end(), t) - end.begin();
            res.push_back(started - ended);
        }
        return res;
    }
};