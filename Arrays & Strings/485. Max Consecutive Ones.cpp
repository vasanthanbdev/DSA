#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0;
        int currLen = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currLen++;
                maxLen = max(maxLen, currLen); 
            }
            else {
                currLen = 0;
            }
        }
        return maxLen;
    }
};


int main() {
    vector<int> nums = {1,1,0,1,1,1};
    Solution sol;
    cout << sol.findMaxConsecutiveOnes(nums);

    return 0;
}