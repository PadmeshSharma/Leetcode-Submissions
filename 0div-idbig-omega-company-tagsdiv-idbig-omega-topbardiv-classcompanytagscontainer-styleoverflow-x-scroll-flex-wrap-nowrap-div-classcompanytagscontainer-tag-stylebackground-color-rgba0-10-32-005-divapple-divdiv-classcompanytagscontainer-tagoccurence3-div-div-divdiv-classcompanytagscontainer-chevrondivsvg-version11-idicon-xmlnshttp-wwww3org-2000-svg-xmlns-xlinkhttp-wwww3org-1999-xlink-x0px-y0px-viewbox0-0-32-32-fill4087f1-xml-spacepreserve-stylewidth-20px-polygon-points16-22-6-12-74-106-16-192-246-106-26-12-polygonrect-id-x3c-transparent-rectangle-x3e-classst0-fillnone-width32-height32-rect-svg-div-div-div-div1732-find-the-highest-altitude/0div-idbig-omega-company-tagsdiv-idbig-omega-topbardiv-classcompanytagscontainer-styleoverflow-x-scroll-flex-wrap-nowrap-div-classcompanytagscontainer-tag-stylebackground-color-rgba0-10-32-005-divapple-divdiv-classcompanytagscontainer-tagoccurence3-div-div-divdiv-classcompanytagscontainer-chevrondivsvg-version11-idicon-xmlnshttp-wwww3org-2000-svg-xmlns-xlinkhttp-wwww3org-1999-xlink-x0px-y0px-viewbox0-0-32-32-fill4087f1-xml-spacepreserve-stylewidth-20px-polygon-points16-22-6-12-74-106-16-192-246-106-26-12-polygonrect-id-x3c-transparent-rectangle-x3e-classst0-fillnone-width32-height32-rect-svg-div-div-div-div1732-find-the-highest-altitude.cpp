class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        set<int> s;
        int sum=0,count=0;
        s.insert(0);
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
            s.insert(sum);
        }
        for(auto it=s.begin();it!=s.end();it++)
        {    count++;
            if(count==s.size())
            {
                return *it;
            }
        }
        return 0;
    }
};