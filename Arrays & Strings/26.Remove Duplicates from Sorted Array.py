from typing import List


class Solution:
    def removeDuplicates(self, nums: List) -> int:
        l, r = 1, 1
        while (r < len(nums)):
            if (nums[r] != nums[r - 1]):
                nums[l] = nums[r]
                l += 1
            r += 1
        return l


if __name__ == "__main__":
    nums = [1, 1, 2]
    sol = Solution()
    print(sol.removeDuplicates(nums))
    
