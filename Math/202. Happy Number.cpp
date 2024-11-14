#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int getNext(int n) {
        int sum = 0;
        while(n > 0) {
            int digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        int slow = n; int fast = n;

        do {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        } while (slow != fast);

        return slow == 1;
    }
};


int main() {
    int n = 19;
    Solution sol;
    if (sol.isHappy(n)) {
        cout << "TURE" << endl;
    } else {
        cout << "FALSE" << endl;
    } 

    return 0;
}