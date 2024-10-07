class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int size = s.length();

        if (size ==0 && t.length() == 0){
            return true;
        } else if (size == 0 ) {
            return true;
        }
        
        int i=0, j=0;
        int count =0;
      // simple approach to check whether chars of size are in string 't'. So as we find chars in 't', i increments in string 's'.
        while (i<size && j<t.length()){
            if (s[i]==t[j]){
                i++;
                count++;
            }
            j++;
        }

      // if size of string 's' is equal to count then 's' is a subsequence of string 't'
        if (count == size){
            return true;
        } else {
            return false;
        }
    }
};
