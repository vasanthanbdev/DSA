from typing import List

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l, r = 0, len(numbers) - 1
        while(l < r):
            if(numbers[l] + numbers[r] < target):
                l += 1
            elif(numbers[l] + numbers[r] > target):
                r -= 1
            else:
                return [l + 1, r + 1]
        return []
        
    
    
if __name__ == "__main__":
    sol = Solution()
    numbers = [2,7,11,15]
    target = 9
    print(sol.twoSum(numbers, target))