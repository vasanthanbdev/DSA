#include <bits/stdc++.h>


class Solution {
public:

    /* Fucntion to find the maximum product fo three numbers in an array
    Logic: Maximum product is the maximum of the product of the three largest numbers 
            and the product of the two smallest numbers with the largest number.
        - intialize three vars as max1,2,3
        - for each element in the list 
            - if the element is greater than max1
                - 
    */
    int maximumProduct(std::vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (auto num : nums) {
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if (num > max2) {
                max3 = max2;
                max2 = num;
            }
            else if (num > max3) {
                max3 = num;
            }

            if (num < min1) {
                min2 = min1;
                min1 = num;
            }
            else if (num < min2) {
                min2 = num;
            }
        }

        return std::max(max1 * max2 * max3, max1 * min1 * min2);
    }
};


int main() {
    std::vector<int>nums;
    int input;
    while(std::cin && std::cin.peek() != '\n') {
        std::cin >> input;
        nums.push_back(input);
    }

    Solution sol;
    std::cout << '\n' << sol.maximumProduct(nums) << std::endl;

    return 0;
}