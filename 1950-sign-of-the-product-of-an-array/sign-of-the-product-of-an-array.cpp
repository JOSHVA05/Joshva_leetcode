class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                return 0;
            else if (nums[i] > 0) {
                nums[i] = 1;
            } else
                nums[i] = -1;
        }
        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= nums[i];
        }
        return product;
    }
};