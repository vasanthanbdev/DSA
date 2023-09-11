from typing import List

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        nums.sort()
        res = []
        for i in range(n - 2):
            if(i > 0 and nums[i] == nums[i - 1]):
                continue
            l, r = i + 1, n - 1
            while(l < r):
                sum = nums[i] + nums[l] + nums[r]
                if(sum < 0 ):
                    l += 1
                elif(sum > 0):
                    r -= 1
                else:
                    res.append([nums[i], nums[l], nums[r]])
                    l += 1
                    r -= 1
                    while(l < r and nums[l] == nums[l - 1]):
                        l += 1
                    while(l < r and nums[r] == nums[r + 1]):
                        r -= 1
        return res
        
if __name__ == "__main__":
    sol = Solution()
    nums = [-1,0,1,2,-1,-4]
    print(sol.threeSum(nums))