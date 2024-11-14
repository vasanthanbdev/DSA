#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int left = 0; int right = height.size() - 1;

        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            res = max(res, area);
            
            if (height[left] < height[right]) {
                left++; 
            }
            else {
                right--;
            }
        }
        
        return res;
    }
};


int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution sol;
    cout << sol.maxArea(height);

    return 0;
}