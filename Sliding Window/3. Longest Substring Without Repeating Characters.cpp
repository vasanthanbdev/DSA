#include <bits/stdc++.h>


class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> umap;
        int currlen = 0, lls = 0;
        for (auto ch : s) {
            if (umap.find(ch) != umap.end()) {
                currlen = 1;
            } else {
                currlen++;
                umap[ch] = 1;
            }
            lls = std::max(lls, currlen);
        }
        return lls;
    }
};


int main () {
    std::string str = "abcabcbb";

    Solution sol;
    std::cout << sol.lengthOfLongestSubstring(str) << std::endl;

    return 0;
}