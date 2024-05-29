from typing import List

class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        for i in range(len(matrix)):
            for j in range(i, len(matrix)):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        for i in range(len(matrix)):
            matrix[i] = matrix[i][::-1]
        
        
if __name__ == "__main__":
    sol = Solution()
    matrix = [[1, 2, 3,], [4, 5, 6], [7, 8, 9]]
    sol.rotate(matrix)
    print(matrix)