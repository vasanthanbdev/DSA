#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int count = 0;
        int prevEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= prevEnd) {
                prevEnd = intervals[i][1];
            } else {
                count++;
                prevEnd = min(prevEnd, intervals[i][1]);
            }
        }

        return count;
    }
};


int main() {
    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};
    Solution sol;
    cout << sol.eraseOverlapIntervals(intervals) << endl;

    return 0;
}