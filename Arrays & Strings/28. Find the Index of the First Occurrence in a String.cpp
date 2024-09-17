#include <bits/stdc++.h>


class Solution {
public: 
    int strStr(std::string haystack, std::string needle) {
        int m = haystack.length(), n = needle.length();
        for (int i = 0; i < m - n + 1; i++) {
            if (haystack.substr(i, n) == needle) return i;
        }   
        return -1;
    }
};


int main() {
    std::string haystack, needle;
    std::cin >> haystack >> needle;

    Solution sol;
    std::cout << sol.strStr(haystack, needle) << std::endl;

    return 0;
}
