from typing import *

def search(self, nums: List[int], target: int) -> bool:
    left, right = 0, len(nums) - 1
    while (left <= right):
        mid = left + (right - left) // 2
        if (nums[mid] == target):
            return True
        #left half
        if (nums[left] < nums[mid]):
            if (nums[left] <= target < nums[mid]):
                right = mid - 1
            else:
                left = mid + 1
        elif (nums[left] > nums[mid]):
            if (nums[mid] < target <= nums[right]):
                left = mid + 1
            else :
                right = mid - 1
        else:
            left += 1
    return False

if __name__ == "__main__":
    nums = [2,5,6,0,0,1,2]
    target = 0
    print(search(nums, target))