#include <bits/stdc++.h>
using std::cin, std::cout, std::endl, std::string;

class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }    
        }

        return s;
    }

};


int main() {
    string s;
    cin >> s;

    Solution sol;
    cout << sol.toLowerCase(s) << endl;

    return 0;
}
