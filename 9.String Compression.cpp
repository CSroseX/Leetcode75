class Solution {
public:
    int compress(vector<char>& chars) {
        chars.push_back('\0'); // Add sentinel character
        string ans; 
        int tmp = 0; // Count occurrences of characters
        char tmp2; // Current character being counted
        
        for (int i = 0; i < chars.size() - 1; i++) {
            tmp2 = chars[i]; // Set current character
            tmp = 1; // Initialize count to 1
            while (chars[i + 1] == tmp2) { // Count repetitions
                i++;
                tmp++;
            }
            ans = ans + tmp2; // Append character to result
            if (tmp > 1) {
                ans = ans + to_string(tmp); // Append count if more than 1
            }
        }
        
        chars.clear(); // Clear original vector
        for (auto i : ans) { // Fill vector with compressed result
            chars.push_back(i);
        }
        
        return chars.size(); // Return length of compressed vector
    }
};
