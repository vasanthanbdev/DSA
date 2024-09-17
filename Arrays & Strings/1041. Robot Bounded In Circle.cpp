#include <bits/stdc++.h>


class Solution 
{
public:
    bool isRobotBounded(std::string instructions) 
    {
        int x = 0, y = 0, d = 0;    // N -> 0, W -> 1, S -> 2, E -> 3 
        std::vector<std::vector<int>> dir_values = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

        for (const char& c : instructions)
        {
            if (c == 'G')
            {
                x += dir_values[d][0];
                y += dir_values[d][1];
            }
            else if (c == 'L')
            {
                d = (d + 1) % 4; // d is moved from n to e i.e, 0 to 1, mod by 4 makes if inside the bound
            }
            else if (c == 'R') 
            {
                d = (d + 3) % 4;
            }
        }    

        return (x == 0 && y == 0) || (d > 0);
    }
};