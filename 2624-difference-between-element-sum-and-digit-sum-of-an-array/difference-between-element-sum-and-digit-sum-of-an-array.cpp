class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
        sum1+=nums[i];
        int s=nums[i];
        while(s!=0)
        {
            sum2+=(s%10);
            s/=10;
        }
        }
        int res=sum1-sum2;
        return res;
    }
};