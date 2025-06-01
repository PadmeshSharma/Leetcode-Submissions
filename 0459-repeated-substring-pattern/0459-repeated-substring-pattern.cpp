class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int len = 1; len <= n / 2; ++len) {
            if (n % len == 0) { // Substring length must divide string length
                string substring = s.substr(0, len);
                string built = "";
                int times = n / len;
                for (int i = 0; i < times; ++i) {
                    built += substring;
                }
                if (built == s) return true;
            }
        }
        return false;
    }
};
