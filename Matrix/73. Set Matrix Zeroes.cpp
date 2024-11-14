#include <bits/stdc++.h>

// Better Solution using HashTable, O(m + n) space complexity
/** 
class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        std::vector<int> row(r, 0), col(c, 0);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}; 
**/


// Optimized approach using O(1) memory
class Solution 
{
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) 
    {
        int rows = matrix.size(), cols = matrix[0].size();
        int zero_row = 1;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++) 
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;

                    if (i > 0) 
                    {
                        matrix[i][0] = 0;
                    }
                    else
                    {
                        zero_row = 0;
                    }

                }
            }         
        }

        for (int i = 1; i < rows; i++) 
        {
            for (int j = 1; j < cols; j++) 
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if (matrix[0][0] == 0) 
        {
            for (int i = 0; i < rows; i++) 
            {
                matrix[i][0] = 0;
            }
        }

        if (zero_row == 0) 
        {
            for (int j = 0; j < cols; j++) 
            {
                matrix[0][j] = 0;
            }
        }
    }
};



int main() 
{
    std::vector<std::vector<int>> matrix = {{1, 1, 1}, {1, 0 , 1}, {1, 1, 1}};

    Solution sol;
    sol.setZeroes(matrix);

    for (const std::vector<int>& row : matrix) 
    {
        for (const int& col : row) 
        {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}