#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> squares;        

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.' ) continue;

                int squareIndex = (i / 3) * 3 + j / 3;
                if (rows[i].find(board[i][j]) != rows[i].end() || 
                    cols[j].find(board[i][j]) != cols[j].end() || 
                    squares[squareIndex].find(board[i][j]) != squares[squareIndex].end()) return false;

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                squares[squareIndex].insert(board[i][j]);
            }
        }

        return true;
    }
};


int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution sol;
    if (sol.isValidSudoku(board) == true) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}