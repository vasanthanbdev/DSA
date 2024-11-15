#include <bits/stdc++.h>

using std::cout, std::endl;


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;

        long rev = 0, temp = x;
        while (temp)
        {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        return x == rev;
    }
};


int main()
{
    Solution sol;
    cout << sol.isPalindrome(121) << endl;

    return 0;
}