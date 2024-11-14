"""11. Container With Most Water.py"""


class Solution:
    """Solution Class"""
    
    def maxArea(self, height: list[int]) -> int:
        """MaxArea function

        Args:
            height (list[int]): height of the vertical lines

        Returns:
            int: maximun amount of water the Container can store
        """
        max_area = 0
        l, r = 0, len(height) - 1

        while l < r:
            h = min(height[l], height[r])
            b = r - l 
            max_area = max(max_area, h * b)

            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        
        return max_area



def main() -> None:
    """Main function"""

    height = [1,8,6,2,5,4,8,3,7]
    sol = Solution()
    print(sol.maxArea(height))


if __name__ == "__main__":
    main()

