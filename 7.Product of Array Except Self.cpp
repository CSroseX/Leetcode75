class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res(nums.size(),1); // initialize a vector of size = nums.size() with values 1.
        
        int pp=1; //prefix product to go from left to right
        for (int i=0; i<nums.size(); i++){
            res[i] = res[i] * pp;
            pp = pp * nums[i];
        }

        int sp =1 ; // suffix product, now to go from right to left. But now the difference is that i has product of all numbers except itself.
        for (int i=nums.size()-1 ; i>=0; i--){
            res[i] = res[i] * sp;
            sp = sp * nums[i];
        }

        return res;

    }
};
