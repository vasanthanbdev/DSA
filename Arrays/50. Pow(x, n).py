#brute force approach - Iteration T: o(n)
# class Solution:
#     def myPow(self, x: float, n: int) -> float:
#         if x == 0:
#             return 0
#         if n == 0:
#             return 1
#         if n < 0:
#             x = 1 / x
#             n = -n
#         pow = x
#         for i in range(n - 1):
#             pow = pow * x
#         return pow

#optimal - divide and conquer & recursion  TIme Complexity : O(log(n))
class Solution:
    def myPow(self, x: float, n: int) -> float:
        if x == 0:
            return 0
        if n == 0:
            return 1
        if n == 1:
            return x
        if n < 0:
            x = 1 / x
            n = -n
        half_pow = self.myPow(x, n // 2)
        if n % 2 == 0:
            return half_pow * half_pow
        else:
            return half_pow * half_pow * x
    
if __name__ == "__main__":
    sol = Solution()
    x = 2.00000
    n = -2
    print(sol.myPow(x, n))