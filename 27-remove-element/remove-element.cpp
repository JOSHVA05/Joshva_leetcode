class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
          int index = 0;
          int n=nums.size();
        for(int i = 0; i< n; i++){
            if(nums[i] != val){
               swap(nums[index],nums[i]);
                index++;
            }
        }
        return index;
    }
};