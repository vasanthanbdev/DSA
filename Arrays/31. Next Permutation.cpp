#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find the break point
        int index = -1; 
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            } 
        }

        // if no break point present
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // find the next greater element
        for (int i = nums.size() - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[index], nums[i]);
                break;
            }
        }

        // reverse the rest of the array
        reverse(nums.begin() + index + 1, nums.end());

        return;

    }
};


int main() {
    vector<int> nums = {1,2,3};
    Solution sol;
    sol.nextPermutation(nums);
    for (auto num: nums) {
        cout << num;
    }
    return 0;
}