#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while (x) {
            // prevent overflow
            if (rev < INT_MIN / 10 || rev > INT_MAX / 10) return 0; 

            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
};