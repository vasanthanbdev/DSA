#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> ptos; // mapping pattern to string
        unordered_map<string, char> stop;  // mapping string to pattern

        // split the string
        vector<string> v;
        string word;
        stringstream ss(s);
        while(ss >> word)
            v.push_back(word);
        
        // check if length is equal
        if (pattern.size() != v.size()) return false;

        for (int i = 0; i < v.size(); i++)
        {
            if ((ptos.find(pattern[i]) != ptos.end() && ptos[pattern[i]] != v[i]) ||
                (stop.find(v[i]) != stop.end() && stop[v[i]] != pattern[i]))
                return false;  // checking both mappings

            ptos[pattern[i]] = v[i];
            stop[v[i]] = pattern[i];
        }

        return true;
    }
};