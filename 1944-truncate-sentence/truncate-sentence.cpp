class Solution {
public:
    string truncateSentence(string s, int k) {
     int count=0;

     string res="";
     
     for(auto x:s)
     {

        if(x==' '){
         count++;
        if(count==k)
        break;
        }
        res+=x;
     }
     return res;
    }
};