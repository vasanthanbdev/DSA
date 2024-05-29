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
        res = [1] * len(nums)
        
        # calculate prefix of current elements and add to the result during first traversal
        prefix = 1
        for i in range(len(nums)):
            res[i] = prefix
            prefix = prefix * nums[i]
            
        # calculate suffix of current element and multiply with the res i.e, prefix
        suffix = 1        
        for i in reversed(range(len(nums))):
            res[i] = res[i] * suffix
            suffix = suffix * nums[i]
            
        return res
    
        
if __name__ == "__main__":
    sol = Solution()
    nums = [1,2,3,4]
    print(sol.productExceptSelf(nums))