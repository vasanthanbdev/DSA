#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = stoi(num1);
        int n2 = stoi(num2);

        return to_string(n1 * n2);
    }
};


int main() {
    string num1 = "2"; string num2 = "3";
    Solution sol;
    cout << sol.multiply(num1, num2) << endl;

    return 0;
}