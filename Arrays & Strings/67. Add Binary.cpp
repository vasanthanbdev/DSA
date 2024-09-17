#include <bits/stdc++.h>


class Solution 
{
public:
    std::string addBinary(std::string a, std::string b) 
    {
        std::string ans;
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        
        while (i >= 0 || j >= 0 || carry)
        {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';
            ans += carry % 2 + '0';
            carry /= 2;
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }

};


int main() 
{
    std::string a = "11", b = "1";

    Solution sol;
    std::cout << sol.addBinary(a, b) << std::endl;
}
