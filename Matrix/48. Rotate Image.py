"""48. Rotate Image"""


class Solution:
    """Solution Class"""
    
    def rotate(self, matrix: list[list[int]]) -> None:
        """
        Rotates the given n x n 2D matrix 90 degrees clockwise in place.

        Args:
            matrix (list[list[int]]): A 2D list representing the matrix to be rotated.

        Returns:
            None: The function modifies the matrix in place and does not return anything.
        """

        # Transpose the matrix
        for i in range(len(matrix)):
            for j in range(i, len(matrix)):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
                
        # Reverse each row to complete the 90-degree rotation
        for i in range(len(matrix)):
            matrix[i] = matrix[i][::-1]    
            
            
if __name__ == "__main__":
    sol = Solution()
    matrix = [[1, 2, 3,], [4, 5, 6], [7, 8, 9]]
    sol.rotate(matrix)
    print(matrix)
