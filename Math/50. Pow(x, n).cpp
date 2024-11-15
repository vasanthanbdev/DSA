#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0 || x == 1)
            return x;
        
        if (n == 1)
            return x;

        if (n == 0)
            return 1;
        
        if (n < 0)
            return 1 / myPow(x, -n);

        if (n % 2 == 0) 
            return myPow(x * x, n / 2);
        else
            return x * myPow(x * x, n / 2);
    }
};