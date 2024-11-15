#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        int res = 0;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (pow(mid, 2) > x)
            {
                r = mid - 1;
            }
            else if (pow(mid, 2) < x)
            {
                l = mid + 1;
                res = mid;
            }
            else
                return mid;   
        }

        return res;
    }
};