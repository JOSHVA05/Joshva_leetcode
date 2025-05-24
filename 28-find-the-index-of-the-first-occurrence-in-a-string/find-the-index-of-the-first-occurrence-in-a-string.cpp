class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.length();
        int n=needle.length();
         for (int i = 0; i <= h - n; ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};