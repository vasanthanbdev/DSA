from typing import List

#brute force approach T: O(m+n)
# class Solution:
#     def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
#         for i in range(len(matrix)):
#             if(target >= matrix[i][0] and target <= matrix[i][-1]):
#                 for num in matrix[i]:
#                     if num == target:
#                         return True
#         return False

#optimal approach T: O(log(m*n)) binary search in 1d array and converting the pos of mid to row and col of 2d array

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])
        left = 0
        right = (m * n) - 1
        while left <= right:
            mid = (left + right) // 2
            row = mid // n
            col = mid % n
            if target == matrix[row][col]:
                return True
            elif target < matrix[row][col]:
                right = mid - 1
            else:
                left = mid + 1
        return False
            
if __name__ == "__main__":
    sol = Solution()
    matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]]
    target = 3
    print(sol.searchMatrix(matrix, target))