# include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> stot, ttos;

        for (int i = 0; i < s.size(); i++)
        {
            if ((stot.find(s[i]) != stot.end() && stot[s[i]] != t[i]) ||
                (ttos.find(t[i]) != ttos.end() && ttos[t[i]] != s[i]))
                return false;

            stot[s[i]] = t[i];
            ttos[t[i]] = s[i];
        }

        return true;
    }
};