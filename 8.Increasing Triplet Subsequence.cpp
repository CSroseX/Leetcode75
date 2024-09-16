class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallestSoFar = INT_MAX, secondSmallestSoFar = INT_MAX;

      // basically we find the smallest number first, then second smallest just after it, and if (Just after second smallest), we can't find number greater than second smallest,
      // then we return true because k>j>i where i is smallest, j is 2nd smallest and k is larger than i and j.
        for (int num : nums) {  // <---- LEARNING : This is called range based loop where we can directly access elements without the use of temp variable i=0. 

            if (num <= smallestSoFar) {
                smallestSoFar = num;
            } else if (num <= secondSmallestSoFar) {
                secondSmallestSoFar = num;
            } else {
                return true;
            }
        }
        
        return false;
    }
};

// Often times range based loop is used with auto& which automatically deduces the type of variable the num is going to be. 
