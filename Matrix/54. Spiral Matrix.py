"""54. Spiral Matrix"""

class Solution:
    
    def spiralOrder(self, matrix: list[list[int]]) -> list[int]:
        """
        Returns the elements of a 2D matrix in spiral order.

        The function traverses the matrix in a spiral pattern starting from the top-left corner
        and moving right, down, left, and up, repeating this pattern while shrinking the bounds
        until all elements are visited.

        Args:
            matrix (list[list[int]]): A 2D list of integers representing the matrix.

        Returns:
            list[int]: A list of integers representing the matrix elements in spiral order.
        """
        
        res = []
        left, right = 0, len(matrix[0])
        top, bottom = 0, len(matrix)
        
        while(left < right and top < bottom):
            # Traverse from left to right along the top row
            for i in range(left, right):
                res.append(matrix[top][i])
            top += 1

            # Traverse from top to bottom along the right column
            for i in range(top, bottom):
                res.append(matrix[i][right - 1])
            right -= 1
            
            # Check if there are remaining rows and columns to traverse
            # Since right represents the index one past the last element in the current row, 
            # right - 1 gives us the index of the last element in the row that we want to include in our traversal.
            if not (left < right and top < bottom):
                break
            
            # Traverse from right to left along the bottom row
            for i in range(right - 1, left - 1, -1):
                res.append(matrix[bottom - 1][i])
            bottom -= 1
            
            # Traverse from bottom to top along the left column
            for i in range(bottom - 1, top - 1, -1):
                res.append(matrix[i][left])
            left += 1
            
        return res
    
    
def main() -> None:
    matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
    print(Solution().spiralOrder(matrix))   

if __name__ == "__main__":
    main()
    