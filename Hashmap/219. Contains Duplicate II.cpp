#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hashmap.find(nums[i]) != hashmap.end())
                if (abs(hashmap[nums[i]] - i) <= k) 
                    return true;
            else
                hashmap[nums[i]] = i;
        }

        return false;
    }
};


int main()
{
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;

    Solution sol;
    cout << sol.containsNearbyDuplicate(nums, k) << endl;
}