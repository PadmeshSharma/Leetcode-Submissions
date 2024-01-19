class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int i = 0, j = needle.size();

        if (needle.size() > haystack.size())
            return -1;

        while (i + j <= haystack.size())
        {
            int k = 0;
            while (k < needle.size() && haystack[i + k] == needle[k])
            {
                k++;
            }

            if (k == needle.size())
            {
                return i;
            }

            i++;
        }

        return -1;
    }
};
