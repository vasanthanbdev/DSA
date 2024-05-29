#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length(); int i = 0;
        int sign = 1; int res = 0;

        //remove white spaces
        while (i < n && s[i] == ' ')
            i++;

        // sign
        if (i < n && s[i] == '+') {
            sign = 1;
            i++;
        } else if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }

        // convert string to integer
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && (digit) > 7))
                return sign == 1 ? INT_MAX : INT_MIN;

            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && (digit) < -8))
                return sign == 1 ? INT_MIN : INT_MAX;

            res = res * 10 + digit;
            i++;
        }

        return sign * res;
    }
};


int main() {
    string s = "42";
    Solution sol;
    cout << sol.myAtoi(s) << endl;

    return 0;
}