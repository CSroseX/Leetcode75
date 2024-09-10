class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      // auto in cpp automatically deduces the data type of the variable we are using. -> that doesn't mean we use it for all variables. 
        auto max = max_element(candies.begin(), candies.end());
        vector<bool> result;
        int i = 0;
      // *max is used because auto max (in line 5) returns an iterator or a pointer to max_element. 
        int max_ele = *max;
        while (i<candies.size()){
            int b = extraCandies + candies[i];
            // the comparison inside push_back decides whether the kid has maximum candies after giving extra candies or not.
            result.push_back( b>= max_ele);
            i++;
        }

        return result;
    }
};
