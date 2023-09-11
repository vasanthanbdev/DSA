from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {}
        for i, num in enumerate(nums):
            if target - num in hash_map:
                return [hash_map[target-num], i]
            hash_map[num] = i
        
if __name__ == "__main__":
    sol = Solution()
    # nums = list(map(int, input().split()))
    # target = int(input())
    nums = [3, 3]
    target = 6
    print(sol.twoSum(nums, target))