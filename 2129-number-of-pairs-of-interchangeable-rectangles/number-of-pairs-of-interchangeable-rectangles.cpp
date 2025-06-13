class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
     long long n = rectangles.size();
        long long res = 0;
        unordered_map<double, int> mp;

        for (int i = 0; i < n; i++) {
            int x = rectangles[i][0];
            int y = rectangles[i][1];
            double z = (double)x / y;  
            res += mp[z];
            mp[z]++;
        }

        return res;    
    }
};