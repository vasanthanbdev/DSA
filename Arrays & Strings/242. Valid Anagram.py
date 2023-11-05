from typing import List

class Solution:       
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        dictionary = {}
        for c in s:
            dictionary[c] = dictionary.get(c, 0) + 1
        
        for h in t:
            if h not in dictionary or dictionary[h] == 0:
                return False
            dictionary[h] -= 1
        
        return True
                
        # return "".join(sorted(s)) == "".join(sorted(t))  one line solution
        # return Counter(s) == Counter(t) using counter function
        
if __name__ == "__main__":
    sol = Solution()
    
    s = "anagram"
    t = "nagaram"
    
    print(sol.isAnagram(s, t))        