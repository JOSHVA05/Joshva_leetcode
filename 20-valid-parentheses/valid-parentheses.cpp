class Solution {
public:
    bool isValid(string s) {
    stack<char>stack;
    unordered_map<char,char>m={{')','('},{']','['},{'}','{'}};
    for(char c:s)
    {
        if(m.find(c)==m.end())
        stack.push(c);
        else if(!stack.empty() && m[c]==stack.top())
        stack.pop();
        else
        return false;
    }    
    return stack.empty();
    }
};