# include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while(n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    /* Using Hashset */
    bool isHappy(int n)
    {
        unordered_set<int> hashset;

        while (hashset.find(n) == hashset.end())
        {
            hashset.insert(n);
            n = this->sumOfSquares(n);

            if (n == 1) return true;
        }

        return false;
    }


    /* Using Tortoise Hare Method
    bool isHappy(int n) {
        int slow = n; int fast = n;

        do {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        } while (slow != fast);

        return slow == 1;
    }
    */
};