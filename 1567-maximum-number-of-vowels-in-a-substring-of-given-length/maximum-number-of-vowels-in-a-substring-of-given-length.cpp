class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int maxVowelCount = 0, currentCount = 0;

        // Count vowels in the first window of size k
        for (int i = 0; i < k; ++i) {
            if (isVowel(s[i])) currentCount++;
        }

        maxVowelCount = currentCount;

        // Slide the window from index k to end
        for (int i = k; i < s.length(); ++i) {
            if (isVowel(s[i])) currentCount++;         // include new character
            if (isVowel(s[i - k])) currentCount--;     // exclude old character

            maxVowelCount = max(maxVowelCount, currentCount);
        }

        return maxVowelCount;
    }
};
