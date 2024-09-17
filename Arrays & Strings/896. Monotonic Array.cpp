#include <bits/stdc++.h>
using namespace std;


/* My solution
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums[0] < nums[1]) {
            for (int i = 1; i < nums.size() - 1; i++) {
                if (nums[i] > nums[i + 1]) return false;
            }
        } 
        else if (nums[0] > nums[1]) {
            for (int i = 1; i < nums.size() - 1; i++) {
                if (nums[i] < nums[i + 1]) return false;
            }
        }
        
        return true;
    }
};
*/


// Optimized Approach
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for (int i = 1; i < nums.size(); ++i) {
            increasing &= nums[i] >= nums[i - 1];
            decreasing &= nums[i] <= nums[i - 1];
        }

        return increasing || decreasing;
    }
};





