# class Solution:
#     def lengthOfLongestSubstring(self, s: str) -> int:
#         lls, currlen = 0, 0
#         hash_map = {}
#         for c in s:
#             if c in hash_map:
#                 currlen = 1
#             else:
#                 hash_map[c] = 1
#                 currlen += 1
#             lls = max(lls, currlen)
#         return lls

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charset = set()
        l = 0
        res = 0
        for r in range(len(s)):
            while s[r] in charset:
                charset.remove(s[l])
                l += 1  
            charset.add(s[r])
            res = max(res, r - l + 1)
        return res
    
if __name__ == "__main__":
    sol = Solution()
    s = "abcabcbb"
    print(sol.lengthOfLongestSubstring(s))