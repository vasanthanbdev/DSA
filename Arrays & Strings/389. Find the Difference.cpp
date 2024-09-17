#include <bits/stdc++.h>


class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        if (s.length() == 0) return t[0];

        int count[26] = {0}; // Initialize an array to keep track of the character counts from 'a' to 'z'.
        for (char& ch : s) {
            count[ch - 'a']++;
        }
        for (char& ch : t) {
            count[ch - 'a']--;

            if (count[ch - 'a'] < 0) {
                return ch;
            }
        }        
        return ' ';
    }
};


int main() {
    std::string s, t;
    std::cin >> s >> t;
    
    Solution sol;
    std::cout << sol.findTheDifference(s, t) << std::endl; 

    return 0;
}
