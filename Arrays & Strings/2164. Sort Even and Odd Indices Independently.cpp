#include <bits/stdc++.h>


class Solution {
public:
    /*
    Logic:
        - store the values odd & even indecies seperately in a new array with the same indexes
        - sort even in asceding, odd in descending
        - merge them in to a new array
    */
    std::vector<int> sortEvenOdd(std::vector<int>& nums) {
        std::vector<int> even;
        std::vector<int> odd;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        std::sort(even.begin(), even.end());
        std::sort(odd.begin(), odd.end(), std::greater<int>());

        int i = 0, j = 0, k = 0;
        while (k < nums.size()) {
            if (k % 2 == 0) {
                nums[k] = even[i++];
            } else {
                nums[k] = odd[j++];
            }
            k++;
        }
        
        return nums;
    }

};


int main() {
    std::vector<int> nums = {4,1,2,3};

    Solution sol;
    std::vector<int> res =  sol.sortEvenOdd(nums);

    for (auto& num : res) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}