#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> map1(26, 0);
        for (char c: s1) {
            map1[c - 'a']++;    
        }

        int left = 0; int right = 0;
        vector<int> map2(26, 0);
        while (right < s2.size()) {
            map2[s2[right] - 'a']++;    

            // contract sliding window
            if ((right - left + 1) >  s1.size()) {
                map2[s2[left] - 'a']--;
                left++;
            }

            if (map1 == map2) {
                return true;
            }

            // expand the sliding window
            right++;
        }

        return false;
    }
};

int main() {
    string s1 = "ab"; 
    string s2 = "eidboaoo";
    Solution sol;
    if (sol.checkInclusion(s1, s2)) {
        cout << "TURE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}