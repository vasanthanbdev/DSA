#include <bits/stdc++.h>


class Solution {
public:
    /* Binary search function to find the smallest index of smallest number greater than or equal to num 
    Logic:
        - initialize two pointers l at first index, r at the last index
        - iterate throught the array until left is greater than right
            - find the mid and check if the target is equal to the element at mid
                - then return mid
            - else if the element at mid is greater than target
                - search in the left portion (modify rigth to mid - 1)
            - else serach in the right portion (modify left to mid + 1)
        - end of the fucntion return left index which is the smallest number >= num 
    */
    int binarySearch(std::vector<int>& arr, int& num){
        int left = 0, right = arr.size() - 1, mid;
        
        while (left <= right) {
            mid = right + left / 2;

            if (arr[mid] == num) {
                return mid;
            } else if (arr[mid] > num) {
                right = mid - 1;
            } else if (arr[mid] < num) {
                left = mid + 1;
            }
        }

        return left;
    }


    /* Fucntion to determine the longest increasing subsquence in an array
    Logic: Greedy with Binary Search
        - create a new array res which we use to store the elements in ascending order
        - for each element in the array 
            - if res is empty or the last element is less than curr element add the curr element to the res
            - else find the right place(using binary search) to replace the element to maintain the ascending order
            - replace the element at the position 
    */
    int lengthOfLIS(std::vector<int>& nums) {
        std::vector<int> arr;

        for (int num : nums) {
            if (arr.empty() || arr.back() < num) {
                arr.push_back(num);
            } else {
                int index = binarySearch(arr, num);
                arr[index] = num;
            }
        }

        return arr.size();
    }
};


int main() {
    std::vector<int> nums = {10,9,2,5,3,7,101,18};

    Solution sol;
    std::cout << sol.lengthOfLIS(nums) << std::endl;
}