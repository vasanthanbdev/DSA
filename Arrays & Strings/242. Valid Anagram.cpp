#include <bits/stdc++.h>


class Solution {
public:
    /* Sorting Approach
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
    */


    /* Hashmap Approach
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        
        // Count the frequency of characters in string s
        for (char& x : s) {
            count[x]++;
        }
        
        // Decrement the frequency of characters in string t
        for (char& x : t) {
            if (count.find(x) == count.end() || count[x] == 0) return false;
            count[x]--;
        }
        
        return true;
    }
    */
 

    /* Char Array Approach */
    bool isAnagram(std::string s, std::string t) {
        // If the lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        int count[26] = {0};
        for (char& c : s) {
            count[c - 'a']++;
        }
        for (char& c : t) {
            if (count[c - 'a'] == 0) return false;
            count[c - 'a']--;
        } 
        
        return true;
    }
};


int main() {
    std::string s, t;
    std::cin >> s >> t;

    Solution sol;
    std::cout << sol.isAnagram(s, t) << std::endl;    

    return 0;
}
