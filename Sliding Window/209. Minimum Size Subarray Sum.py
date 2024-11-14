"""209. Minimum Size Subarray Sum"""

class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        """
        Finds the minimal length of a contiguous subarray of which the sum is at least `target`.
        If there is no such subarray, returns 0.

        Args:
            target (int): The target sum that the subarray needs to reach or exceed.
            nums (list[int]): The list of positive integers.

        Returns:
            int: The minimal length of a contiguous subarray with a sum at least `target`.
                Returns 0 if no such subarray exists.
        """
        l = 0  # Initialize the left pointer of the window
        r = 0  # Initialize the right pointer of the window
        current_sum = 0  # Initialize the current sum of the window
        min_len = float('inf')  # Initialize the minimum length to infinity

        # Iterate over the array with the right pointer
        while r < len(nums):
            current_sum += nums[r]  # Add the current number to the current sum
            r += 1  # Move the right pointer to the right

            # While the current sum is greater than or equal to the target
            while current_sum >= target:
                # Update the minimum length if the current window is smaller
                min_len = min(min_len, r - l)
                current_sum -= nums[l]  # Subtract the number at the left pointer from the current sum
                l += 1  # Move the left pointer to the right

        # Return the minimum length if found, otherwise return 0
        return min_len if min_len != float('inf') else 0


def main() -> None:
    """Main Function"""

    nums: list[int] = [2, 3, 1, 2, 4, 3]
    target: int = 7

    sol = Solution()
    print(sol.minSubArrayLen(target, nums))


if __name__ == "__main__":

    main()
