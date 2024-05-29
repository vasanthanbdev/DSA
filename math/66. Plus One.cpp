#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // If all digits are 9, add extra 1 at beginning
        vector<int> res(digits.size() + 1, 0);
        res[0] = 1;
        return res;
    }
};


int main() {
    vector<int> digits = {1,2,3};
    Solution sol;
    vector<int> res = sol.plusOne(digits);
    for(auto i: res) {
        cout << i << ",";
    }
    cout << endl;

    return 0;
}