/*
167. Two Sum II - Input Array Is Sorted
*/

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) 
    {
        int l = 0, r = numbers.size() - 1;
        while (numbers[l] + numbers[r] != target)
            if (numbers[l] + numbers[r] > target)
                r--;
            else
                l++;
        return {l + 1, r + 1};
    }
};


int main() 
{
    std::vector<int> numbers = {2,7,11,15};
    int target = 9;

    Solution sol;
    std::vector<int> res = sol.twoSum(numbers, target);

    for (const int& num: res)
    {
        std::cout << num << " "; 
    }
    std::cout << std::endl;

    return 0;
}
