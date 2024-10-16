#include <bits/stdc++.h>


class Solution 
{
public:
    std::string tictactoe(std::vector<std::vector<int>>& moves) 
    {
        std::vector<int>a(8,0), b(8,0);
        
        for (int i = 0; i < moves.size(); i++) 
        {
            int r = moves[i][0], c = moves[i][1];
            std::vector<int>& player = (i % 2 == 0) ? a : b;
            
            // row
            player[r]++;

            // column
            player[c + 3]++;

            // primary diagonal, r == c
            if (r == c) 
            {
                player[6]++;
            }

            // secondary diagonal, r + c = n - 1
            if (r == 2 - c) 
            {
                player[7]++;
            }
        }

        for (int i = 0; i < 8; i++) 
        {
            if (a[i] == 3) return "A";
            if (b[i] == 3) return "B";
        }

        return (moves.size() == 9) ? "Draw" : "Pending";
    }

};