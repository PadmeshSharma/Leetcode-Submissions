class Solution {
public:
    bool isPalindrome(string s) 
    {
        int low=0,high=s.length();
        while(low<high)
        {
            if(!isalnum(s[low]))
            {
                low++;
            }
            else if(!isalnum(s[high]))
            {
                high--;
            }
            else if(tolower(s[low])==tolower(s[high]))
            {
                low++;
                high--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};