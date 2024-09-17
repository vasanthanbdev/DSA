class Solution:
    def romanToInt(self, s: int) -> int:
        hmap = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        res = 0
        for i in range(len(s)):
            if (i < (len(s) - 1) and hmap[s[i]] < hmap[s[i+1]]):
               res -= hmap[s[i]]
            else:
                res += hmap[s[i]]
        return res


if __name__ == "__main__":
    s = input()
    sol = Solution()
    print(sol.romanToInt(s))
