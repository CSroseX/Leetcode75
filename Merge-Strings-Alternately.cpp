class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string r;
        r.reserve(word1.length() + word2.length());
        int i =0, j=0;
        int m = word1.length();
        int n = word2.length();

        while (i<m || j<n){
            if (i<m) { r.push_back(word1[i++]);}
            if (j<n) { r.push_back(word2[j++]);}
        }

        return r;
        
    }
};

// LEARNING : reserve() pre-allocates memory for the string r to hold at least the specified number of characters (in this case, the combined length of word1 and word2).
