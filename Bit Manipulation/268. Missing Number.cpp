#include <bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int sum1 = n * (n + 1) / 2; int sum2 = 0;
//         for (int i: nums) {
//             sum2 += i;
//         }
//         return sum1 - sum2;
//     }
// };


/*
    Given array in range [0, n], return missing
    Ex. nums = [3,0,1] -> 2, nums = [0,1] -> 2

    Use the fact that XOR is its own inverse
    Ex. [0,1,3,4]
    Missing = 4^(0^0)^(1^1)^(2^3)^(3^4)
            = (4^4)^(0^0)^(1^1)^(3^3)^2
            = 0^0^0^0^2 = 2

    Time: O(n)
    Space: O(1)
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); int res = n;
        for (int i = 0; i < n; i++) {
            res ^= i ^ nums[i];
        }
        return res;
    }
};