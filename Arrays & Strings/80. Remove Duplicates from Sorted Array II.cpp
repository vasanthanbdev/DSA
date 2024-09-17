#include <bits/stdc++.h>

class Solution {
public:
    /* Function to remove duplicates from a list
    Summary:
        remove some duplicates in-place such that each unique element appears at most twice.
        
    Args:
        vector: nums
    
    Returns:
        int: count

    Logic:
        - Initialize two pointers l & r, both starting at index 2.
        - Iterate through the array using r.
        - For each element at index r, compare it with the element at index l-2 (the second last valid position).
        - If they are different, it means the current element is unique (or appears less than twice):
            - Place the current element at index l.
            - Increment l 
        - Always increment r
    */    
    int removeDuplicates(std::vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;

        int l = 2, r = 2;
        while (r < n) {
            if (nums[r] != nums[r - 2]) {
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