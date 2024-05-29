from typing import * 

#Brute-Force T: O(m*n), S: O(m)
# def nextGreaterElement(nums1: List[int], nums2: List[int]) -> List[int]:
#     hash_map = {n:i for i, n in enumerate(nums1)}       #using hashmap
#     res = [-1] * len(nums1)
#     for i in range(len(nums2)):
#         if nums2[i] in hash_map:
#             for j in range(i + 1, len(nums2)):
#                 if (nums2[j] > nums2[i]):
#                     res[hash_map[nums2[i]]] = nums2[j]
#                     break
#     return res

#optimized approach using stack, T: O(m+n)
def nextGreaterElement(nums1: List[int], nums2: List[int]) -> List[int]:
    hash_map = {n:i for i, n in enumerate(nums1)}
    res = [-1] * len(nums1)
    stack = []
    for curr in nums2:
        while stack and curr > stack[-1]:
            val = stack.pop()
            res[hash_map[val]] = curr
        if curr in hash_map:
            stack.append(curr)
    return res


if __name__ == "__main__":
    nums1 = [4, 1, 2]
    nums2 = [1, 3, 4, 2]
    print(nextGreaterElement(nums1, nums2))