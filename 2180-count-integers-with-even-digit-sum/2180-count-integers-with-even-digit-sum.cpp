class Solution {
public:
    int countEven(int num) 
    {
        int count=0;
        for(int i=1;i<=num;i++)
        {
            int n=i,dig,ans=0;
            while(n!=0)
            {
                dig=n%10;
                ans=ans+dig;
                n=n/10;
            }
            if(ans%2==0)
                count++;
        }
        return count;
    }
};