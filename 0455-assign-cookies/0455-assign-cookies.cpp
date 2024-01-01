/*class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (s.empty()) {
        
            return 0;
        }

      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      int curr=0;
      int contentchild=0;
      for(int i=0;i<g.size();i++)
      {
          if(g[i]<=s[curr] && curr<s.size())
          {
              curr++;
              contentchild++;
          }
      }
        return contentchild;
    }
};*/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cookiesNums = s.size();
        if(cookiesNums == 0)  return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int maxNum = 0;
        int cookieIndex = cookiesNums - 1;
        int childIndex = g.size() - 1;
        while(cookieIndex >= 0 && childIndex >=0){
            if(s[cookieIndex] >= g[childIndex]){
                maxNum++;
                cookieIndex--;
                childIndex--;
            }
            else{
                childIndex--;
            }
        }
        return maxNum;
    }
};