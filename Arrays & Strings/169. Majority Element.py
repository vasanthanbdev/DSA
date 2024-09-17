from typing import List

# brtue force T: O(n), S: O(n)
# class Solution:
#     def majorityElement(self, nums: List[int]) -> int:
#         hash_map = {}
#         res, max_count = 0, 0
#         for n in nums:
#             hash_map[n] = 1 + hash_map.get(n, 0)
#             res = n if hash_map[n] > max_count else res
#             max_count = max(hash_map[n], max_count)
#         return res
    
# Optimized approach, Time Complexity of O(n) and space complexity of O(1)
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        res, count = 0, 0
        for n in nums:
            if count == 0:
                res = n
            count += 1 if n == res else -1
        return res

    
if __name__ == "__main__":
    sol = Solution()
    nums = [2,2,1,1,1,2,2]
    print(sol.majorityElement(nums))