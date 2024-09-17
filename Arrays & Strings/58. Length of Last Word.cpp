#include <bits/stdc++.h>


class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int i = s.size() - 1;
        
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int j = i;
        while (i >= 1 && s[i] != ' ') {
            i--;
        }

        return j - i;        
    } 

};
