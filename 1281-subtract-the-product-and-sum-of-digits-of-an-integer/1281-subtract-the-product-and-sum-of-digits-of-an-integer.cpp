class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int prod=1,sum=0;
       while(n!=0) 
       {
           int dig=n%10;
           prod=prod*dig;
           sum=sum+dig;
           n=n/10;
       }
        int ans=prod-sum;
        return ans;
    }
};