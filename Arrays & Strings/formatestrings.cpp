#include <iostream>
#include <string>

std::string formatString(std::string str) {
    std::string result;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        std::string numStr;
        int num = 1;

        while (isdigit(str[i+1])) {
            numStr += str[i+1];
            i++;
        }

        if (!numStr.empty()) {
            num = stoi(numStr);
        }

        for (int j = 0; j < num; j++) {
            result += c; 
        }
    }

    return result;
}

int main() {
    std::cout << formatString("a1b10") << std::endl; 
    std::cout << formatString("b3c6d15") << std::endl;
    return 0;
}