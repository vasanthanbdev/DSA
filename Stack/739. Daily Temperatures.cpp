#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> stack;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && temperatures[stack.top()] < temperatures[i]) {
                int prev_ind = stack.top();
                stack.pop();
                res[prev_ind] = i - prev_ind; 
            }
            stack.push(i);
        }

        return res;    
    }
};


int main() {
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    Solution sol;
    vector<int> res;
    res = sol.dailyTemperatures(temperatures);
    for (auto i: res) {
        cout << i << ",";
    }
    cout << endl;
    return 0;
}