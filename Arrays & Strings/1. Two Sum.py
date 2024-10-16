from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {}
        for i, num in enumerate(nums):
            if target - num in hash_map:
                return [hash_map[target-num], i]
            hash_map[num] = i
        
        
        
    '''this method can't be used because it requires sorting and if we sort we can't have the 
    initial index positions of the values if the asked for the values we can use this method'''
    # def twoSum(self, nums: List[int], target: int) -> List[int]:
    #     nums.sort()
    #     l, r = 0, len(nums) - 1
    #     while (l < r):
    #         sum = nums[l] + nums[r]
            
    #         if (sum < target):
    #             l += 1
    #         elif (sum > target):
    #             r -= 1
    #         else:
    #             return [l, r]
        

if __name__ == "__main__":
    sol = Solution()
    # nums = list(map(int, input().split()))
    # target = int(input())
    nums = [3, 3]
    target = 6
    print(sol.twoSum(nums, target))

