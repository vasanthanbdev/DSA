"""36. Valid Sudoku"""


class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        rows: dict[int, set[str]] = {}
        cols: dict[int, set[str]] = {}
        squares: dict[int, set[str]] = {}

        for i, row in enumerate(board) :
            for j, value in enumerate(row):
                if value == ".":
                    continue

                s = (i // 3) * 3 + j // 3
                
                if i not in rows:
                        rows[i] = set()
                if j not in cols:
                        cols[j] = set()
                if s not in squares:
                        squares[s] = set()
                
                if value in rows[i] or value in cols[j] or value in squares[s]:
                    return False
                rows[i].add(value)
                cols[j].add(value)
                squares[s].add(value)

        return True


def main() -> None:
    """Main Function"""
    board = [["5", "3", ".", ".", "7", ".", ".", ".", "."],
             ["6", ".", ".", "1", "9", "5", ".", ".", "."],
             [".", "9", "8", ".", ".", ".", ".", "6", "."],
             ["8", ".", ".", ".", "6", ".", ".", ".", "3"],
             ["4", ".", ".", "8", ".", "3", ".", ".", "1"],
             ["7", ".", ".", ".", "2", ".", ".", ".", "6"],
             [".", "6", ".", ".", ".", ".", "2", "8", "."],
             [".", ".", ".", "4", "1", "9", ".", ".", "5"],
             [".", ".", ".", ".", "8", ".", ".", "7", "9"]]

    print(Solution().isValidSudoku(board))


if __name__ == "__main__":
    main()
