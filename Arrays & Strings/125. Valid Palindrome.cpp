/* 125. Valid Palindrome
 */

#include <bits/stdc++.h>

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        if(s.size() == 0 or s.size() == 1) {
            return true;
        }

        int l = 0, r = s.size() - 1;

        while (l < r)
        {
            while (!isalnum(s[l]) && l < r)
                l++;
            while (!isalnum(s[r]) && l < r)
                r--;

            if (std::tolower(s[l]) != std::tolower(s[r]))
                return false;
            
            l++;
            r--;
        }

        return true;
    }
};

int main()
{
    std::string s = "A man, a plan, a canal: Panama";

    Solution sol;
    std::cout << sol.isPalindrome(s) << std::endl;

    return 0;
}