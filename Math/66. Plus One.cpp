#include <bits/stdc++.h>
using namespace std;


// Optimized Solution T: O(1) at best case and O(n) at worst
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		for (int i = digits.size() - 1; i >= 0; --i) {
			if (digits[i] < 9) {
				++digits[i];
				return digits;
			}
			digits[i] = 0;
		}

		digits.insert(digits.begin(), 1);
		return digits;
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
