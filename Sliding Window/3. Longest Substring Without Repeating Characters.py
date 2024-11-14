""" Hashmap Approach
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hmap = {}
        l, res = 0, 0
        for r in range(len(s)):
            # if the char not in map or it's index is lesser than left it is a unique character in the sliding window
            if (s[r] not in hmap or hmap[s[r]] < l):
                hmap[s[r]] = r
                res = max(res, r - l + 1)
            else:
                l = hmap[s[r]] + 1
                hmap[s[r]] = r
        return res 
"""


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charset: set = set()
        l: int = 0
        r: int = 0
        length: int = 0
        while l <= r and r < len(s):
            if s[r] not in charset:
                charset.add(s[r])
                length = max(length, r - l + 1)
                r += 1
            else:
                charset.remove(s[l])
                l += 1
        return length

    
if __name__ == "__main__":
    sol = Solution()
    s = input()
    print(sol.lengthOfLongestSubstring(s))
