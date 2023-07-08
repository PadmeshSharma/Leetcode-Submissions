/*class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        while(n!=0)
        {
            if(n&1)
            {
                n=n>>1;
                if(!(n&1))
                    return true;
                break;
            }
            else if ((!(n&1)) | 0)
            {
                n=n>>1;
                if((n&1))
                {
                    if 
                }
                    return true;
                break;
            }
        }
         return false;      
    }
};*/
    class Solution {
public:
    bool hasAlternatingBits(int n) {
        int d = n&1;
        while ((n&1) == d) {
            d = 1-d;
            n >>= 1;
        }
        return n == 0;
    }
};