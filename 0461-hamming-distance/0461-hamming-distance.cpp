/*class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        while(x!=0 && y!=0)
        {
            while(x&1)
            {
                count++;
            }
        }
    }
};*/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0, n = x ^ y;
        while (n) {
            ++dist;
            n &= n - 1;
        }
        return dist;
    }
};