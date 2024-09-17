#include <bits/stdc++.h>


class Solution {
public:
    bool repeatedSubstringPattern(std::string s) {
        std::string ss = s + s;
        return ss.substr(1, ss.length() - 2).find(s) != std::string::npos;
    }
};


int main() {
    std::string s;
    std::cin >> s;

    Solution sol;
    std::cout << sol.repeatedSubstringPattern(s) << std::endl; 

    return 0;
}
