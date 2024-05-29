#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(); 
        int maxLength = 1;
        int start = 0;
        
        for(int i = 0; i < n; i++) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);
            
            if(len > maxLength) {
                maxLength = len;
                start = i - (len - 1) / 2;
            }
        }
        
        return s.substr(start, maxLength);
    }
    
private:
    int expandAroundCenter(string s, int left, int right) {
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++; 
        }

        return right - left - 1;
    }
};


int main() {
    string s = "babad";
    Solution sol;
    cout << sol.longestPalindrome(s) << endl;

    return 0;
}