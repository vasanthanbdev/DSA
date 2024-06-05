// sort the arr
// iterate trough the array in one for loop
// fix one element next we have is a two sum prob
	// 2sum logic - using 2 pointers
	// if the next element is equal to i then continue
	// initiate l and r
	// cal sum
	// if sum < 0 then l++
	// if sum > 0 then r--
	// else sum == 0 add the three numbers to the res
		// increament the l and r until no duplicates 
		// increament l and r 1 step
// return

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1; int r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum < 0) l++;
                else if (sum > 0) r--;
                else {
                    res.push_back({nums[i], nums[l], nums[r]});

                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++; r--;
                }
            }
        }

        return res;
    }
};




