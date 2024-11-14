#include <bits/stdc++.h>


class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - (low / 2);
    }
};

int main() {
    int low = 3, high = 7;

    Solution sol;
    std::cout << sol.countOdds(low, high) << std::endl;

}
