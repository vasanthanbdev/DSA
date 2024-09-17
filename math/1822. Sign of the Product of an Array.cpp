#include <bits/stdc++.h>

/* My solution
class Solution{
public:
    int arraySign(std::vector<int>& nums) {
        int product = 1;
        for (int& num : nums) {
            if (num == 0) return 0;
            product *= num;
        }
        if (product > 0) return 1;
        else return -1;
    }
};
*/


class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        int count = 0;
        for (int& num : nums) {
            if (num == 0) return 0;
            if (num < 0) count++;
        }
        if (count % 2 == 0) return 1;
        return -1; 
    }
};


int main() {
    std::vector<int>nums;
    int input;
    while (std::cin && std::cin.peek() != '\n') {
        std::cin >> input;
        nums.push_back(input);
    }    

    Solution sol;
    std::cout << sol.arraySign(nums) << std::endl;
    return 0;
}
