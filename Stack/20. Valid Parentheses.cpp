#include <bits/stdc++.h>

using std::cout, std::endl, std::string;


class Solution {
public:
    bool isValid(string s) {
        std::stack<char> parentheses;
        
        for (char& c: s)
        {
            if (c == '(')
                parentheses.push(')'); 
            else if (c == '[')
                parentheses.push(']');
            else if (c == '{')
                parentheses.push('}');
            else if (!parentheses.empty() && c == parentheses.top())
                parentheses.pop();
            else
                return false;
        }

        return parentheses.empty();
    }
};