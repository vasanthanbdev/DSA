#include <bits/stdc++.h>

class Solution {
public:
    /* Climbing Stairs
    Logic: Recursion + memoization
        - if n=0, or n is 1, 2, 3 return n (base case)
        - check if we already seen this n, if true then return the value stored from the dict 
        - if n is greater than that the ways is equal to ways(n-1) + ways(n-2)
        - store the ways of the each n in a dictionary (memoization)
        -  return the final ways 
    */
    int climbStairs(int n) {
        if (n <= 0) return 0;
        if (n == 1 || n == 2 || n == 3) return n;

        static std::unordered_map<int, int> memo;
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        int ways = climbStairs(n - 1) + climbStairs(n - 2);
        memo[n] = ways;

        return ways;
    }
};


int 
main() {
    Solution sol;
    std::cout << sol.climbStairs(5) << std::endl;

    return 0;
}