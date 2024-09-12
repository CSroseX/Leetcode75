class Solution {
public:
// just swapping left half vowels with right half vowels
    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (!isVowel(s[left])) left++;
            else if (!isVowel(s[right])) right--;
            else swap(s[left++], s[right--]); // <-- we use pre-defined function 'swap'
        }
        return s;
    }

    bool isVowel(char c) {
      // s after the string is C++14's string literal suffix. So it's same as writing  string("aeiouAEIOU"). 'find' is a pre-defined fucntion. npos is like returning -1. 
        return "aeiouAEIOU"s.find(c) != string::npos;
    }
};

// naive approach : would be to traverse the string s and push vowels in order to vector. Also, mark the indices. then traverse back in s and insert vowels from vector from
// back. ik it's kinda stupid approach but yeah :) 
