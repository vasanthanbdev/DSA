#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());

        // brute force
        // for (int i = 0; i < nums.size(); i++) {
        //     int product = 1;
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (j == i) continue;

        //         product = product * nums[j];
        //     }
        //     res[i] = product;
        // }


        // optimal approach 
        // calculate prefix
        int prefix = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] = prefix;
            prefix *= nums[i];
        }

        // calculate the postfix
        int postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= postfix;  /* multiply postfix with prefix value*/
            postfix *= nums[i];
        }

        return res; 
    }
};


int main() {
    vector<int> nums = {1,2,3,4};
    Solution sol;
    vector<int> res = sol.productExceptSelf(nums);
    for (auto num: res) {
        cout << num;
    }
    return 0;
}