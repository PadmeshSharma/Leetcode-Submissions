class Solution {
public:
    int alternateDigitSum(int n) 
    {
        int ans=0,count=0,dig,digit,reverse=0;
        while(n!=0)
        {
            dig=n%10;
            reverse=(reverse*10)+dig;
            n=n/10;
        }
        while(reverse!=0)
        {
            digit=reverse%10;
            count++;
            ans=ans+(pow(-1,(count+1))*digit);
            reverse=reverse/10;
        }
        return ans;
    }
};