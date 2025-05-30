class Solution {
public:
    bool isPalindrome(int x) {
     int n = x;
    if(n<0)
    return false;  
    long long revnum=0;
    while(n>0){
        revnum=(revnum*10)+(n%10);
        n/=10;
    }
    return x==revnum;
    }
};