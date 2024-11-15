from typing import List
from collections import defaultdict

#bruteforce approach - T: O(m.nlog(n))
# class Solution:
#     def groupAnagrams(self, strs):
#         anagram_dict = defaultdict(list)
        
#         for s in strs:
#             # Sort the characters in the string to create a unique key
#             sorted_s = ''.join(sorted(s))
#             anagram_dict[sorted_s].append(s)
        
#         return list(anagram_dict.values())

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord("a")] += 1
            res[tuple(count)].append(s)
        return res.values()
    

if __name__ == "__main__":
    sol = Solution()
    strs = ["eat","tea","tan","ate","nat","bat"]
    print(sol.groupAnagrams(strs))