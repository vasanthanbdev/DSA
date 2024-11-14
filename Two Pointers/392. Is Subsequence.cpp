/*Is Subsequence
 */

#include <bits/stdc++.h>

class Solution
{
public:
    bool isSubsequence(std::string s, std::string t)
    {
        int n = s.length();
        if (n == 0) return true;

        int i = 0;
        for (const char &c : t)
        {
            if (s[i] == c)
            {
                i++;
                if (i == n)
                    return true;
            }       
        }
        return false;
    }
};

int main()
{
    std::string s = "abc", t = "ahbgdc";

    Solution sol;
    std::cout << sol.isSubsequence(s, t) << std::endl;

    return 0;
}