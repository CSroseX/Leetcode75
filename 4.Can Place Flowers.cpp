class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size() && n > 0; i++)
    {
      // check if (if left of element has vacancy OR it's starting) AND (if right of element has vacancy OR it's end) 
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
        {
          // if so, then move i forward AND reduce the number of flowers to be planted (n--) (because we have already planted and so n--) 
            i++;
            n--;
        }
    }
      //if number of flowers are empty then we were successful in planting without planting adjacently.
    if (n == 0)
        return true;
    // return false even if n is 1 or greater because we were unsuccessful. 
    return false;
    }
};

// time complexity = O(flowerbed.size())
