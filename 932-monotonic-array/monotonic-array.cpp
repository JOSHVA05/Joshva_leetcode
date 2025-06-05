class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    int n=nums.size();
    int dcount=1,icount=1;
    for(int i=1;i<n;i++)
    {
        if(nums[i-1]>=nums[i])dcount++;
        if(nums[i-1]<=nums[i])icount++;
    }
    return dcount==n || icount==n;
    }
};