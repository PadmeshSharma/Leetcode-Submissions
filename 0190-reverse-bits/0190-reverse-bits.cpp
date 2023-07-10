/*class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {
        int ans;
        while(n!=0)
        {
            int i,dig=n%10;
            for(i=1;i<=n;i++)
            {
                if((dig*pow(10,i))<INT_MAX && (dig*pow(10,i))>INT_MIN)
                {
                    ans=(dig*pow(10,i))+ans;
                }
            }
            n=n/10;
        }
        return ans;
    }
};*/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
        
        return n;
        
    }
};