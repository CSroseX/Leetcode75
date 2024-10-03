class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        if (nums.size() == 1){
            return;
        }
        int j = 0; // This j tracks when the zero'th element has reached. 
      // Meaning i and j go together/ traverse till j encounters a 0. Once encountered, i which is in front of j, will be swapped. 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};
