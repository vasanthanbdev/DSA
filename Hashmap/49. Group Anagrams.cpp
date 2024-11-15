#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> res;

        for (string s: strs)
        {
            string sorted = s;
            std::sort(sorted.begin(), sorted.end());  
            anagrams[sorted].push_back(s);
        }

        for (pair i: anagrams)
        {
            res.push_back(i.second);
        }

        return res;
    }
};