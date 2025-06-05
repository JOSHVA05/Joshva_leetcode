class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=s.size();
        int i=res-1,count=0;
        while(i>=0&&s[i]==' ')
        {
            i--;
        }
            while(i>=0&&s[i]!=' ')
            {
                count++;
                i--;
            }

        return count;
    }
};