"""28. Find the Index of the First Occurrence in a String
"""


class Solution:
    """Solution Class
    """

    def strStr(self, haystack: str, needle: str) -> int:
        """strStr
        Function to find index of the first occurance in a string

        Args:
            haystack (str): string
            needle (str): target substring

        Returns:
            int: index of the first occurance if found or -1 
        """

        len_h: int = len(haystack)
        len_n: int = len(needle) 
        
        if len_h < len_n:
            return -1
        
        for i in range(len_h): 
            if haystack[i: i + len_n] == needle:
                return i

        return -1


def main() -> None:
    sol = Solution()

    haystack = "sadbutsad"
    needle = "sad"

    print(sol.strStr(haystack, needle))


if __name__ == "__main__":
    main()
