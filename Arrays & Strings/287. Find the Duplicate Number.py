from typing import List

# brute force we need to solve in constant time T:O(n), S:O(n)
# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         dictionary = {}
#         for num in nums:
#             if num in dictionary:
#                 return num
#             else:
#                 dictionary[num] = 1
#         return -1

#optimal - Tortoise hare method T:O(n), S:O(1)
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        slow = nums[0]
        fast = nums[0]
        while True:
            slow = nums[slow]
            fast = nums[nums[fast]]
            if slow == fast:
                break
        fast = nums[0]
        while slow != fast:
            slow = nums[slow]
            fast = nums[fast]
        return slow

if __name__ == "__main__":
    sol = Solution()
    nums = [1,3,4,2,2]
    print(sol.findDuplicate(nums))    