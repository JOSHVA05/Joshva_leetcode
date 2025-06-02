class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0)
            {
                count++;
                sum+=nums[i];
            }
        }
        if(count==0)return 0;
        int res;
        res=sum/count;
        return res;
    }
};