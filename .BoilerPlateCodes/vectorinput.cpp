#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input;
    
    cout << "Please input space-separated numbers, then press <Enter>: ";
    while (cin && cin.peek() != '\n') {
        cin >> input;
        nums.push_back(input);
    }
    
    cout << "\n\nYou've entered: ";
    for(auto& n : nums) {
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}