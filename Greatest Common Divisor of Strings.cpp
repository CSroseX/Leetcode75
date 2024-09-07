// Hashmaps in cpp are used to store unique key-value pairs. No keys are repeated. If you want your map to be sorted, just used ordered_map function. To access keys, 
// use map.first and for values, map.second  .

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2!= str2 + str1) {
            return "";
        }

      // store unique characters in count1 and count2, as a pair in which char is individual character of string and int is their frequency. 
        unordered_map<char, int> count1, count2;
        for (char c : str1) {
            count1[c]++;
        }
        for (char c : str2) {
            count2[c]++;
        }

      // for every pair in count1, 
        string gcdStr = "";
        for (auto& p : count1) {
          // we first find if p.first exists in count2 or not.
            if (count2.find(p.first)!= count2.end() && p.second > 0) {
              //  If yes, we find GCD.
                int gcd = GCDfunc(p.second, count2[p.first]);
              //  After found GCD, concatinate the final result. 
                for (int i = 0; i < gcd; i++) {
                    gcdStr += p.first;
                }
            }
        }
        
        return gcdStr;
    }

// GCD is the largest number that can divide two given numbers evenly. So here we find out the least amount of char (int) required to build up str1.
    int GCDfunc(int a, int b){ 
        if (b==0){
            return a;
        }
        return GCDfunc(b, a%b);
    }
};
