#include <bits/stdc++.h>


class Solution {
public:
    /* Function to move zeros to the end of the list
    Logic: Two Pointers
        - initialize 2 pointers l, r starting at index 0
        - for each element at the list
            - if the element at index r is not zero
                - swap it with the element at index l
                - increament l
            - increament r
    */
    void moveZeroes(std::vector<int>& nums) {
        int l = 0, r = 0;
        while (r < nums.size()) {
            if (nums[r] != 0) {
                std::swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }
};



int main() {
    std::vector<int> nums;
    int input;
    
    while (std::cin && std::cin.peek() != '\n') {
        std::cin >> input;
        nums.push_back(input);
    }
    
    Solution sol;
    sol.moveZeroes(nums);

    for (auto num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
