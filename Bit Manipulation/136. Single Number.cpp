#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //  the intiution is doing xor opertaion on the array values, the two same values cancel each other cause 
        //  2 ^ 2 = 0 hence the only thing remains is ans 
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            res = res ^ nums[i];
        }
        return res;
    }
};