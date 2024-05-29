#include <bits/stdc++.h>
using namespace std;


//  brute force approach
// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> result(n + 1);
        
//         for(int i=0; i<=n; i++) {
//             int count = 0;
//             while(i) {
//                 count += i & 1;
//                 i >>= 1;
//             }
//             result[i] = count; 
//         }
        
//         return result;
//     }
// };



//  dynamic programming
// the value of the current index is the 1 + res[i - offset]
//  offset is the 1, 2, 4, 8, 16, ...
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1, 0);
        int offset = 1;
        for (int i = 1; i <= n; i++) {
            // if (offset * 2 == i) {
            //     offset = i;
            // }
            // res[i] = 1 + res[i - offset];

            /*
                Given int, return array: for each i, ans[i] is # of 1's
                Ex. n = 2 -> [0,1,1], 0 = 0 has 0, 1 = 1 has 1, 2 = 10 has 1

                x = 1001011101 = 605
                x'= 0100101110 = 302
                Differ by 1 bit, by removing LSB: f(x) = f(x / 2) + (x mod 2)

                Time: O(n)
                Space: O(1), the output array does not count towards space
            */
            res[i] = res[i >> 1] + (i & 1);
        }
        return res;
    }
};


int main () {
    int n = 5;
    Solution sol;
    vector<int> bits = sol.countBits(n);
    for(auto i: bits) {
        cout << i;
    }
    cout << endl;
}