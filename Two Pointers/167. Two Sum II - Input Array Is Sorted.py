"""167. Two Sum II - Input Array Is Sorted
"""

class Solution:
    """Solution Class"""

    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        """Two Sum function
        
        Args:
            numbers (list[int]): list of integer numbers
            target (int): target value to search for

        Returns:
            list[int]: index postion of the values
        """
        l, r = 0, len(numbers) - 1
        while (numbers[l] + numbers[r]) != target:
            if (numbers[l] + numbers[r]) < target:
                l += 1
            else:
                r -= 1
        return [l + 1, r + 1]
        

def main() -> None:
    """Main funciton
    """
    sol = Solution()
    numbers = [2,7,11,15]
    target = 9
    print(sol.twoSum(numbers, target))
    

if __name__ == "__main__":
    main()

