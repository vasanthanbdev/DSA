#include <bits/stdc++.h>


class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) return ans;

        int n = matrix.size();      // n -> no. of rows
        int m = matrix[0].size();   // m -> no. of cols 
        int top = 0, bottom = n - 1, left = 0, right = m - 1;

        while (top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {     // left to right
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {        // top to bottom
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top > bottom || left > right) break;

            for (int i = right; i >= left; i-- ) {       // right to left
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;

            for (int i = bottom; i >= top; i--) {        // bottom to top
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

        return ans;
    }
};
