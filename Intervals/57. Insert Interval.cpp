#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0; int n = intervals.size();
        vector<vector<int>> res;
        
        while (i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }

        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        res.push_back(newInterval);

        while (i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};


int main() {
    vector<vector<int>> intervals = {{1,3},{6,9}};
    vector<int> newInterval = {1,5};

    Solution sol;
    vector<vector<int>> res = sol.insert(intervals, newInterval);
    
    for (auto i: res) {
        cout << "[";
        for (auto j: i) {
            cout << j;
        }
        cout << "], ";
    }
    cout << endl;

    return 0; 
}