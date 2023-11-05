from typing import List

# class Solution:
#     def longestConsecutive(self, nums: List[int]) -> int:
#         if len(nums) == 0:
#             return 0
#         if len(nums) == 1:
#             return 1
#         nums.sort()
#         lcs = 1
#         l, r = 0, 1
#         while l < r and r < len(nums):
#             if nums[r] == nums[r - 1] + 1:
#                 currlen = r - l + 1
#                 lcs = max(lcs, currlen)
#                 r += 1
#             else:
#                 l = r
#                 r += 1
#         return lcs

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset = set(nums)
        lcs = 0
        for num in nums:
            if (num - 1) not in numset:   #if the predessor doesn't exist it is a start of a new sequece
                currlen = 0
                while num + currlen in numset:
                    currlen += 1
                lcs = max(lcs, currlen)
        return lcs

if __name__ == "__main__":
    sol = Solution()
    nums = [100, 4, 200, 1, 3, 2]
    # nums = [0, 0]
    print(sol.longestConsecutive(nums))