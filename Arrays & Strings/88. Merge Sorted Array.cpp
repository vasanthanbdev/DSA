/*
iterate through the nums1 in reverse order
compare elements of nums1 from m to 0 with the elements of nums2
add the largest num to the current position of the nums1
*/

#include <bits/stdc++.h>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int j = m - 1, k = n - 1;

        for (int i = nums1.size() - 1; i >= 0 && k >= 0; i--) {
            if (j >= 0 && nums1[j] > nums2[k]) {
                nums1[i] = nums1[j--];
            }
            else {
                nums1[i] = nums2[k--];
            }
        }      

        for (auto num: nums1) {
            std::cout << num;
        }

        std::cout << std::endl;
    }
};


int main() {
    std::vector<int> nums1 = {0};
    int m = 0;
    std::vector<int> nums2 = {1};
    int n = 1;
    
    Solution sol;
    sol.merge(nums1, m, nums2, n);        
    
    return 0;
}
