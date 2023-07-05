/*class Solution {
public:
    int addDigits(int num) 
    {
        int ans=0,dig,rem;
        if(num==0)
        { 
            return ans;
        }
        else 
        {
            while(num!=0)
            {
                dig=num%10;
                ans=ans+dig;
                num=num/10;
            }
        }
        rem=ans/10;
        if(rem!=0)
        {   
            addDigits(ans);
        }
        return ans;
    }
};*/
class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        else if(num % 9 == 0) return 9;
        else return num % 9;
    }
};