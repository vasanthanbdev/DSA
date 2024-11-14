#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lcs = 0;

        unordered_set<int> hashset(nums.begin(), nums.end());

        for (int n: nums)
        {
            if (!hashset.contains(n - 1))  // start of a sequence
            {
                int length = 0;
                
                while (hashset.contains(n + length))
                    length++;
                
                lcs = max(lcs, length);
            }
        }

        return lcs;
    }
};