class Solution {
public:
    // Check for adjacent repeating characters and return the count of repeats
    int checkAdjacent(vector<char>& c, int i) {
        if (i >= c.size()) return 0;
        char ch = c[i];
        int len = 0;
        while (i < c.size() && c[i] == ch) {
            len++;
            i++;
        }
        return len;
    }

    // Compress the character array and return the new length
    int compress(vector<char>& chars) {      
        int i = 0, j = 0;  // i is the reading pointer, j is the writing pointer
        
        while (i < chars.size()) {
            chars[j] = chars[i];  // Write the current character to the new position
            int count = checkAdjacent(chars, i);  // Get the count of adjacent duplicates
            
            if (count > 1) {
                string countStr = to_string(count);  // Convert the count to a string
                for (char digit : countStr) {
                    chars[++j] = digit;  // Write each digit of the count
                }
            }
            
            i += count;  // Move `i` to the next distinct character
            j++;  // Move `j` to the next writing position
        }
        
        chars.resize(j);  // Resize the vector to remove unused space
        return j;  // Return the new length
    }
};