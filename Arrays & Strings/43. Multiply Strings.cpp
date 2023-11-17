#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        vector<int> arr(num1.size() + num2.size(), 0);
        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                product += arr[i + j + 1];
                arr[i + j + 1] = product % 10;
                arr[i + j] += product / 10;
            }
        }

        string res;
        for (char digit: arr) {
            if (!res.empty() || digit != 0) {
                res.push_back(digit + '0');
            }
        }

        return res;
    }
};


int main() {
    string num1 = "123";
    string num2 = "456";
    Solution sol;
    cout << sol.multiply(num1, num2) << endl;

    return 0;
}