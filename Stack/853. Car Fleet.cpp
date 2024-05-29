#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int carFleet(int target, vector<int>& position, vector<int>& speed) {
//         // create a vector of pairs
//         vector<pair<int, int>> cars;
//         for (int i = 0; i < position.size(); i++) {
//             cars.push_back({position[i], speed[i]});
//         }

//         // sort the vector in reverse order
//         sort(cars.begin(), cars.end(), greater<pair<int, int>>());

//         // create a stack to store times
//         stack<double> times;

//         for (pair<int, int> car: cars) {
//             double time = (double)(target - car.first) / car.second;

//             if(!times.empty() && times.top() >= time){
//                 times.pop();
//             }
            
//             times.push(time);
//         }

//         return times.size();
//     }
// };




/*
    n cars 1 road, diff pos/speeds, faster cars slow down -> car fleet, return # fleets
    Ex. target = 12, pos = [10,8,0,5,3], speeds = [2,4,1,1,3] -> 3 (10 & 8, 0, 5 & 3)

    Sort by start pos, calculate time for each car to finish, loop backwards
    If car behind finishes faster then catches up to fleet, else creates new fleet

    Time: O(n log n)
    Speed: O(n)
*/

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        
        vector<pair<int, double>> cars;
        for (int i = 0; i < n; i++) {
            double time = (double) (target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end());
        
        double maxTime = 0.0;
        int result = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            double time = cars[i].second;
            if (time > maxTime) {
                maxTime = time;
                result++;
            }
        }
        
        return result;
    }
};





int main() {
    int target = 10;
    vector<int> position = {10,8,0,5,3};
    vector<int> speed = {2,4,1,1,3};

    Solution sol;
    cout << sol.carFleet(target, position, speed) << endl;

    return 0;
}