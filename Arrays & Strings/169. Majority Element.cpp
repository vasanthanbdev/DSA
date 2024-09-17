#include <bits/stdc++.h>


class Solution {
public:
    /* Function to determine the majority element in a list
    Logic: Sliding Window
        - Initialize 2 vars 'res' to hold the current candidate & 'majority' to hold the majority difference 
        - for each value of array, 
            - check if difference is 0 (means new candidate or majority tie)
                - assign the curr to res
            - check if the curr value is equal to the current candidate(res)
                - increament majority
            - else decreament majority 
    */
    int majorityElement(std::vector<int>& nums) {
        int res = 0, majority = 0;
        for (int num: nums) {
            if (majority == 0) {
                res = num;
            }
            majority += (num == res) ? 1 : -1;
        }
        return res;
    }
};


int main() {
    std::vector<int> nums = {2,2,1,1,1,2,2};
    Solution sol;
    
    std::cout << sol.majorityElement(nums) << std::endl;

    return 0;
}