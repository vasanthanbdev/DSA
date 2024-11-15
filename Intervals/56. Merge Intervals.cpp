#include <bits/stdc++.h>

using std::cout, std::endl, std::vector;


/* Only works for merging two elements at a time */
// class Solution 
// {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) 
//     {
//         vector<vector<int>> res;

//         std::sort(intervals.begin(), intervals.end());

//         for (int i = 0; i < intervals.size(); i++)
//         {
//             if (i + 1 < intervals.size() &&
//                 intervals[i][1] >= intervals[i + 1][0])
//             {
//                 res.push_back({intervals[i][0], std::max(intervals[i][1], intervals[i + 1][1])});
//                 i++;
//             }
//             else
//                 res.push_back(intervals[i]);
//         }    

//         return res;   
//     }
// };



class Solution 
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        std::sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;

        for (const vector<int> interval: intervals)
        {
            if (res.empty() || res[-1][1] < interval[0])
                res.push_back(interval);
            else
                res[-1][1] = std::max(res[-1][1], interval[1]);
        }

        return res;
    }
};

int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};

    Solution sol;
    vector<vector<int>> merged = sol.merge(intervals);

    for (vector<int> interval : merged)
    {
        cout << '[' << interval[0] << ',' << interval[1] << ']' << ',';
    }
    cout << endl;

    return 0;
}