#ifndef __PALINDROME_HPP__
#define __PALINDROME_HPP__

#include <vector>
#include <iostream>

using namespace std;

class Palindrome {
    public:
        Palindrome();
        ~Palindrome();

        bool IsPalindrome(int x);
};

Palindrome::Palindrome() {}

Palindrome::~Palindrome() {}

bool Palindrome::IsPalindrome(int x) {
    if (-2e31 <= x && x <= 2e31 -1) {
        if (x < 0) return false;
        if (x == 0) return true;
        if (x > 0 && x < 10) return true;
        long long reverse2 = 0;
        long long reverse = x%10;
        int rest = x/10;
        reverse2 = rest%10;
        reverse = reverse*10 + reverse2%10;
        rest = rest/10;
        
        while (rest != 0) {
            reverse2 = rest%10;
            reverse = reverse*10 + reverse2%10;
            rest = rest/10;
        }
        if (reverse == x) return true;
        else return false;
    } else return false;
}

#endif