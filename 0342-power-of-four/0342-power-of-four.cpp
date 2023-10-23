/*class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        int ans=1;
        for(int i=0;i<n;i++)
        {
            if(n==1 || ans==n)
            {
                return true;
            }
            if(ans<=n/4)
            {
                ans=ans*4;
            }
        }
        return false;
    }
};*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n>0) && ((n&(n-1))==0) && ((n%3==1));
    }
};