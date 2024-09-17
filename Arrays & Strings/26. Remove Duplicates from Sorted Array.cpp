#include <bits/stdc++.h>

class Solution {
public:
    /* Function to remove duplicates from a list
    Summary:
        remove some duplicates in-place such that each unique element appears at most once.

    Args:
        vector: nums
    
    Returns:
        int: count

    Logic:
        - Initialize 2 pointers l, r both starting at index 1
        - Iterate through the array using r
        - For each element at index r, compare it with the prev element(l-1) (last valid position)
        - if they are not equal (we have a unique element)
            - place the curr element at index l
            - increament l 
        - increament r
    */
    int removeDuplicates(std::vector<int>& nums) {
        int l = 1, r = 1;
        while (r < nums.size()) {
            if (nums[r] != nums[r - 1]) {
                nums[l] = nums[r];
                l++;
            }
            r++;
        }
        
        return l;
    }
};

int main() {
    std::vector<int> nums = {1,1,2};
    Solution sol;
    
    std::cout << sol.removeDuplicates(nums) << std::endl;
    for (auto num: nums) {
        std::cout << num;
    }
    std::cout << std::endl;

    return 0;
}