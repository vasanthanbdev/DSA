#include <bits/stdc++.h>


class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int max_wealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
               sum += accounts[i][j];
            }
            max_wealth = std::max(max_wealth, sum);
        }
        return max_wealth;
    }
};


int main() {
    int row, col; std::cin >> row >> col;
    std::vector<std::vector<int>> accounts(row, std::vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> accounts[i][j];
        }
    }
    
    Solution sol;
    std::cout << sol.maximumWealth(accounts) << std::endl;

    return 0;
}
