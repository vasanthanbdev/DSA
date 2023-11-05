from typing import List

#brute force, T: O(n), S: O(n)
# class Solution:
#     def majorityElement(self, nums: List[int]) -> List[int]:
#         hash_map = {}
#         ans = []
#         for num in nums:
#             hash_map[num] = 1 + hash_map.get(num, 0)
#             if hash_map[num] > ( len(nums) // 3):
#                ans.append(num)
#         return ans 

#optimal solution, T: O(n), S: O(1) (boyer moor's algorithm)
#The intiution is atmost only 2 elements can occur more than n/3 times for an array of size n
#and there can be no majority element or 1 majority element greater than n/3 times
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        m1, m2 = 0, 0
        count1, count2 = 0, 0
        #finding the majority elements
        for num in nums:
            if m1 == num:
                count1 += 1
            elif m2 == num:
                count2 += 1
            elif count1 == 0:
                m1 = num
                count1 = 1
            elif count2 == 0:
                m2 = num
                count2 = 1
            else:
                count1 -= 1
                count2 -= 1
        #finding the count of majority elements
        count1, count2 = 0, 0
        for num in nums:
            if num == m1:
                count1 += 1
            elif num == m2 :
                count2 += 1
        #checking if the count is greater than n/3       
        res = []
        if count1 > (len(nums) // 3):
            res.append(m1)
        if count2 > (len(nums) // 3):
            res.append(m2)
        
        return res
                
if __name__ == "__main__":
    sol = Solution()
    nums = [1, 1, 1, 3, 3, 2, 2, 2]
    print(sol.majorityElement(nums))