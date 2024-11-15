#include <bits/stdc++.h>

using std::cout, std::endl, std::vector, std::string;


class Solution 
{
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> res;
        
        if (nums.size() == 1) 
        {
            res.push_back(std::to_string(nums[0]));
            return res;
        }
        
        for (int l = 0, r = 0; r < nums.size(); r++, l = r)
        {
            while(r + 1 < nums.size() && nums[r + 1] == nums[r] + 1)
                r++;
            
            if (l == r)     
                res.push_back(std::to_string(nums[r]));
            else
                res.push_back(std::to_string(nums[l]) + "->" + std::to_string(nums[r]));
        }

        return res;
    }
};


int main()
{
    vector<int> nums = {0, 1};

    Solution sol;
    vector<string> res = sol.summaryRanges(nums);

    for (string s: res)
        cout << s << ",";
    cout << endl;

    return 0;
}