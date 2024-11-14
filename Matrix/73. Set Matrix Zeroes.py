"""73. Set Matrix Zeroes"""


class Solution:
    
    def setZeroes(self, matrix: list[list[int]]) -> None:
        rows = len(matrix)
        columns = len(matrix[0])

        row = [0] * rows
        column = [0] * columns
        
        for i in range(rows):
            for j in range(columns):
                if matrix[i][j] == 0:
                    row[i] = 1
                    column[j] = 1
    # Create an instance of the Solution class
    solution = Solution()
        for i in range(rows):
            for j in range(columns):
                if row[i] == 1 or column[j] == 1:
                    matrix[i][j] = 0


# Example usage
def main() -> None:

    # Example input matrix
    size = 3
    matrix = [[0 for _ in range(size)] for _ in range(size)]

    x = 1
    for i in range(size):
        for j in range(size):
            matrix[i][j] = x
            x += 1
    
    # Call the setZeroes method on the input matrix
    Solution().setZeroes(matrix)

    # Print the modified matrix
    for row in matrix:
        print(row)
        

if __name__ == "__main__":
    main()
