#include <iostream>
#include <string>

int main() {
    std::string text = "hello world";
    std::string pattern = "wor";

    int textLength = text.length();
    int patternLength = pattern.length();

    for (int i = 0; i <= textLength - patternLength; i++) {
        bool found = true;
        
        for (int j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            std::cout << "Pattern found at index " << i << std::endl;
            return 0;
        }
    }

    std::cout << "Pattern not found in the text" << std::endl;
    return 0;
}
