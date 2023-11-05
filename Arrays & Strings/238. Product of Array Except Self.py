from typing import List

#brute force approach - T: O(n^2)
# class Solution:
#     def productExceptSelf(self, nums: List[int]) -> List[int]:
#         res = []
#         for i in range(len(nums)):
#             temp = 1
#             for j in range(len(nums)):
#                 if(j == i):
#                     continue
#                 temp *= nums[j]
#             res.append(temp)
#         return res
    
#optimal approach - T: O(n)
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pass
        
if __name__ == "__main__":
    sol = Solution()
    nums = [1,2,3,4]
    print(sol.productExceptSelf(nums))