#include "palindrome.hpp"
#include <iostream>

int main() {
    Palindrome palindrome;
    bool result = palindrome.IsPalindrome(1234567899);
    std::cout << result << std::endl;
    return 0;
}