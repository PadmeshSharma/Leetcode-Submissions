/*class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) 
    {
       int ans=0,j,ways,left;
       while(left!=0)
       {
           for(int i=0;i<=(total/cost1);i++)
           {
               left=total-i*cost1;
               j=left/cost2;
               ans=ans+j+1;
           }
       }
        return ans;
    }
};*/
class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ways = 0;
        long long penscost = 0;
        while(penscost <= total) {
            long long remainingAmount = total - penscost;
            long long pencils = remainingAmount/cost2 + 1;
            ways += pencils;
            penscost += cost1;
        }
        return ways;
    }
};