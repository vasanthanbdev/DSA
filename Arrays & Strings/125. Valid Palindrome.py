class Solution:
    def isPalindrome(self, s: str) -> bool:
        if(len(s) == 0 or len(s) == 1):
            return True
        # s = ''.join(filter(str.isalnum, s)).lower()  #removing the non alphanum characters
        l, r = 0, len(s) - 1
        while(l < r):
            while(not s[l].isalnum() and l < r):   #skipping the non alphanum characters 
                l += 1
            while(not s[r].isalnum() and l < r):
                r -= 1
            if(s[l].lower() != s[r].lower()):
                return False        
            l += 1
            r -= 1
        return True
        

if __name__ == "__main__":
    sol = Solution()
    s = "A man, a plan, a canal: Panama"
    print(sol.isPalindrome(s))