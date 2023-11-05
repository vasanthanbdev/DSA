from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash_map = {}
        for num in nums:
            hash_map[num] = 1 + hash_map.get(num, 0)
        res = []
        
            
        return res
    
    
if __name__ == "__main__":
    sol = Solution()
    nums = [1,1,1,2,2,3]
    k = 2
    print(sol.topKFrequent(nums, k))