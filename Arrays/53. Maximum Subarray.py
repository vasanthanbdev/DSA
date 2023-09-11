from typing import List

# class Solution:
#     def maxSubArray(self, nums: List[int]) -> int:
#         if len(nums) < 2:
#             return nums[0]
#         l = 0
#         r = 1
#         max_sum = curr_sum = nums[0]
#         while r < len(nums):
#             if curr_sum < 0:
#                 l += 1
#                 r += 1
#                 curr_sum = sum(nums[l:r])
#             else:
#                 r += 1
#                 curr_sum = sum(nums[l:r])
#             max_sum = max(max_sum, curr_sum)
#         return max_sum
    
#kadane's algorithm
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if len(nums) < 1:
            return 0
        curr_sum = max_sum = nums[0]
        for i in range(1, len(nums)):
            if curr_sum < 0:
                curr_sum = nums[i]
            else:
                curr_sum += nums[i]
            max_sum = max(max_sum, curr_sum)
        return max_sum

if __name__ == "__main__":
    sol = Solution()
    nums = [-2,1,-3,4,-1,2,1,-5,4]
    print(sol.maxSubArray(nums))