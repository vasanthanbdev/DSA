from typing import List

#brute force
# class Solution:
#     def set_row(self, matrix, i):
#         for j in range(len(matrix[i])):
#             if matrix[i][j] != 0:
#                 matrix[i][j] = -1
    
#     def set_column(self, matrix, j):
#         for i in range(len(matrix)):
#             if matrix[i][j] != 0:
#                 matrix[i][j] = -1

#     def setZeroes(self, matrix: List[List[int]]) -> None:
#         for i in range(len(matrix)):
#             for j in range(len(matrix[i])):
#                 if matrix[i][j] == 0:
#                     self.set_row(matrix, i)
#                     self.set_column(matrix, j)
        
#         for i in range(len(matrix)):
#             for j in range(len(matrix[i])):
#                 if matrix[i][j] == -1:
#                     matrix[i][j] = 0

#better approach
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        rows = len(matrix)
        columns = len(matrix[0])
        row = [0] * rows
        column = [0] * columns
        
        for i in range(rows):
            for j in range(columns):
                if matrix[i][j] == 0:
                    row[i] = 1
                    column[j] = 1

        for i in range(rows):
            for j in range(columns):
                if row[i] == 1 or column[j] == 1:
                    matrix[i][j] = 0

# Example usage
if __name__ == "__main__":
    # Create an instance of the Solution class
    solution = Solution()

    # Example input matrix
    size = 3
    matrix = [[0 for _ in range(size)] for _ in range(size)]

    x = 1
    for i in range(size):
        for j in range(size):
            matrix[i][j] = x
            x += 1
    
    # Call the setZeroes method on the input matrix
    solution.setZeroes(matrix)

    # Print the modified matrix
    for row in matrix:
        print(row)