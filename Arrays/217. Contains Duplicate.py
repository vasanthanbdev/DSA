from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        num_dict = {}
        for num in nums:
            if num in num_dict:
                return True
            else:
                num_dict[num] = 1
        return False
    
if __name__ == "__main__":
    sol = Solution()
    nums = [1, 2, 3, 4, 1]
    print(sol.containsDuplicate(nums))