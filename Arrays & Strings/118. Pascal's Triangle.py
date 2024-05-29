from typing import *

#brute force
# class Solution:
#     def nCr(self, n, r):
#         # value of each element in pascal's triangle is (n-1)C(r-1)
#         # nCr = n! / r! * (n-r)!
#         res = 1
#         for i in range(r):
#             res = res * (n - i) 
#             res = res / (i + 1)
#         return int(res)

#     def generate(self, numRows: int) -> List[List[int]]:
#         ans = []
#         for n in range(numRows):
#             row = []
#             for r in range(n + 1):
#                 row.append(self.nCr(n, r))
#             ans.append(row)
#         return ans

#better approach
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        for n in range(1, numRows + 1):
            ans.append(self.generate_row(n))
        return ans
    
    def generate_row(self, n: int) -> List[int]:
        val = 1
        row = [1]
        for col in range(1, n):
            val *= (n - col)
            val //= col
            row.append(val)
        return row

if __name__ == "__main__":
    sol = Solution()
    numRows = 5
    triangle = sol.generate(numRows)
    for i in range(len(triangle)):
        print(triangle[i])