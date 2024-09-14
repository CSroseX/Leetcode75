class Solution {
public:
    string reverseWords(string s) {
        vector<string> list;
        istringstream stream(s); // istringstream as a way to treat a string like an input stream.
      // stream >> word; reads one word at a time from the stream and stores it in the variable word
        string word;

        // Split the sentence into words and store them in the vector
        while (stream >> word) {
            list.push_back(word); // Now list looks like list = ["hello","chitransh"]
        }

        string result;
        
        // Iterate through the vector backwards and concatenate words to result
        for (auto it = list.rbegin(); it != list.rend(); ++it) {
            if (!result.empty()) {
                result += " ";  // Add a space before appending the next word if result is NOT empty
            }
            result += *it;
        }

        return result;
    }
};
