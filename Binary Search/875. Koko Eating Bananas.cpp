#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool canFinish(vector<int>& piles, int mid, int h) {
        int hours = 0;
        for (auto pile: piles) {
            hours += ceil(pile / (double)(mid));
        }

        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end()); 
        
        //  find the k trying all possible values between max and min using binary search
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (canFinish(piles, mid, h)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};


int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    Solution sol;
    cout << sol.minEatingSpeed(piles, h) << endl;

    return 0;
}