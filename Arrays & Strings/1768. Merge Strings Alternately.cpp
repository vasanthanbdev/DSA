#include <bits/stdc++.h>


class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string res = "";
        int l1 = word1.length(), l2 = word2.length();
        for (int i = 0; i < l1 || i < l2; i++) {
            if (i < l1) res += word1[i];
            if (i < l2) res += word2[i];
        }     
        return res;
    }
};


int main() {
    std::string word1, word2;
    std::cin >> word1 >> word2;    
    
    Solution sol;
    std::cout << sol.mergeAlternately(word1, word2) << std::endl;    

    return 0;
}
