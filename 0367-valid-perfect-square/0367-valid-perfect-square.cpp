class Solution {
public:
    bool isPerfectSquare(int num)
    {
        for(int i=0;i<=(num/2);i++)
        {
            if(pow(i,2)== num|| num==1)
                return true;
        }
        return false;
    }
};