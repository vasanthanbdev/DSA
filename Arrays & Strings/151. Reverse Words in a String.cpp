#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        if (s.size() == 0) return s;

        stack<string> words;
        string word;
        stringstream stream(s);

        while (stream >> word) {
            if (word != "") {
                words.push(word);
            }
        }

        string res = "";
        while (!words.empty()) {
            res += words.top();        
            res += ' ';
            words.pop();
        }
        res.pop_back();

        return res;
    }
};





int main() {
    string s = "  hello world  ";
    Solution sol;
    cout << sol.reverseWords(s) << endl;

    return 0;
}