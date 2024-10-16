#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        std::stack<std::string> words;

        std::string word = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (word != "")
                {
                    words.push(word);
                    word = "";
                }
            }
            else
            {
                word += s[i];
            }
        }
        words.push(word);

        std::string res = "";
        while (!words.empty())
        {
            res += words.top();
            words.pop();
            res += ' ';
        }
        res.pop_back();

        return res;
    }
};

int main()
{
    string s = "  hello world";
    Solution sol;
    cout << sol.reverseWords(s) << endl;

    return 0;
}