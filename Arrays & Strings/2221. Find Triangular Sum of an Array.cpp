#include <bits/stdc++.h>


class Solution {
public:
    /* Triangular Sum of an Array
    Logic:  
        - if the length of the array is 1 return the first element
        - set a new array of size nums.length - 1
        - for each element in the array, add the next element with it and add to the new array at ith pos
        - call the function recursively
    */
    int triangularSum(std::vector<int>& nums) {
        if (nums.size() == 1) return nums[0];

        std::vector<int> newNums(nums.size() - 1);

        for (int i = 0; i < nums.size() - 1; i++) {
            newNums[i] = (nums[i] + nums[i + 1]) % 10;
        }

        return triangularSum(newNums);
    }
};


int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    Solution sol;
    std::cout << sol.triangularSum(nums) << std::endl;

    return 0;
}