#include <bits/stdc++.h>


class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[i][n - i - 1];
        } 

        if (n % 2 != 0) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }

};


int main() {

    std::vector<std::vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Solution sol;
    std::cout << sol.diagonalSum(mat) << std::endl;

    return 0;
}
