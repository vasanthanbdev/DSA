#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for (string token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = stack.top(); stack.pop();
                int a = stack.top(); stack.pop();

                if (token == "+") stack.push(a + b);
                else if (token == "-") stack.push(a - b); 
                else if (token == "*") stack.push(a * b);
                else if (token == "/") stack.push(a / b);
            }
            else {
                stack.push(stoi(token));  
            }
        }

        return stack.top();
    }
};


int main() {


    return 0;
}