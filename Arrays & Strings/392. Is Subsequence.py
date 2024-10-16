"""392. Is Subsequence
"""


class Solution:
    """Solution class
    """

    def isSubsequence(self, s: str, t: str) -> bool:
        """Function to determine if a string is a subsequence of another 

        Args:
            s (str): subsequence
            t (str): main string

        Returns:
            bool: true if subsequence, false if not
        """

        n = len(s)
        if not s:
            return True

        i: int = 0
        for c in t:
            if s[i] == c:
                i += 1
                if i == n:
                    return True
        
        return False


def main() -> None:
    """Main function
    """

    s: str = "abc"
    t: str = "ahbgdc"

    sol = Solution()
    print(sol.isSubsequence(s, t))


if __name__ == "__main__":
    main()
