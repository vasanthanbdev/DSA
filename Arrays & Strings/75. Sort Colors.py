from typing import  List    

# class Solution:
#     def sortColors(self, nums: List[int]) -> None:
#         # nums.sort()
#         i = 0
#         while i < len(nums):
#             if nums[i] == 0:
#                 nums.insert(0, nums.pop(i))
#             elif nums[i] == 1:
#                 i += 1
#             else:
#                 nums.append(nums.pop(i))
                
#dutch national flag algorithm
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        # nums.sort()
        low, mid, high = 0, 0, len(nums) - 1
        while mid <= high:
            if nums[mid] == 0:
                nums[low], nums[mid] = nums[mid], nums[low]
                mid += 1
                low += 1
            elif nums[mid] == 1:
                mid += 1
            else:
                nums[mid], nums[high] = nums[high], nums[mid] 
                high -= 1
        
if __name__ == "__main__":
    sol = Solution()
    nums = [2, 0, 2, 1, 1, 0]
    sol.sortColors(nums)
    print(nums)