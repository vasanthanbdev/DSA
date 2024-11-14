#include <bits/stdc++.h>
using namespace std;

/* Using Unordered Map */
// class Solution 
// {
// public:
//     bool canConstruct(string ransomNote, string magazine) 
//     {
//         std::unordered_map<char, int> mmap;

//         for (char m : magazine)
//         {
//             if (mmap.find(m) != mmap.end())
//                 mmap[m]++;
//             else 
//                 mmap[m] = 1;
//         }

//         for (char r : ransomNote)
//         {
//             if (mmap.find(r) != mmap.end() && mmap[r] != 0)
//                 mmap[r]--; 
//             else
//                 return false;
//         }

//         return true;
//     }
// };


/* Using Char Array */
class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        char count[128] = {0};

        for (char c : magazine)
            count[c]++;
        
        for (char c : ransomNote)
            if (count[c]-- == 0)
                return false;
        
        return true;
    }
};



int main() 
{
    string ransomNote = "aa";
    string magazine = "aab";

    Solution sol;
    cout << sol.canConstruct(ransomNote, magazine) << endl;

    return 0;
}