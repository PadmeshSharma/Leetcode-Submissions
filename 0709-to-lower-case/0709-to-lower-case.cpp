class Solution {
public:
    string toLowerCase(string s) 
    {
        string str = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                char ch = s[i] - 'A' + 'a';
                str += ch;
            }
            else
            {
                str += s[i];
            }
        }
        return str;
    }
};
