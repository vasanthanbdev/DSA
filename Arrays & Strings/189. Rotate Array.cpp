#include <bits/stdc++.h>


// class Solution {
// public:
//     /* Function to rotate an array to the right by k steps, where k is non-negative
//     Logic: Brute force 
//         - use a temp array
//         - remove the last k elements of the array and store it in the temp
//         - shift the elements of the array by k
//         - then insert the elements from temp to array
//     */
//     void rotate(std::vector<int>& nums, int k) {
//         std::vector<int> temp(k);
//         int n = nums.size();

//         for (int i = n - k; i < n; i++) {
//             temp[i - n + k] = nums[i];
//         }

//         for (int i = n - k - 1; i >= 0; i--) {
//             nums[i + k] = nums[i];
//         }

//         for (int i = 0; i < k; i++) {
//             nums[i] = temp[i];
//         }
//     }
// };


class Solution {
public:
    /* Function to reverse a given array
    Logic: Two pointers 
        - use left at pos 0 and right index at pos size(nums)
        - until left = right, swap the elements at pos l and r
        - increament l and decreament r
     */
    void reverse(std::vector<int>& nums, int l, int r) {
        int temp;
        while (l <= r) {
            temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++; r--;
        }
    }

    /* Function to rotate an array to the right by k steps, where k is non-negative
    Logic: Reversal Algorithm
        - Ensure k is within the range [0, n)
        - reverse the whole array
        - reverse the first k elements of the array
        - reverse the rest of the elements of the array
     */
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size(); k = k % n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};



int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    Solution sol;
    sol.rotate(nums, k);

    for (auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}