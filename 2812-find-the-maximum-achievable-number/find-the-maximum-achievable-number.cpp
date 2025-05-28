class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
    for(int i=t;i>0;i--)
    num=num+1;
    return num+t;
    }
};