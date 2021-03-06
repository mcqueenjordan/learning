// This file was constructed from a template designed for the first few
// chapters of the book to save time. It may be the case that some of these
// includes are unnecessary. That's okay.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_open() {char ch; std::cin >> ch;}

int main()  // C++ programs start by executing the main function
{
    int a = 0;
    int b = 0;
    std::cout << "let a = ";
    std::cin >> a;
    std::cout << "let b = ";
    std::cin >> b;
    std::cout << "Doing a / b * b + a \% b...\n";
    std::cout << "a: " << a << '\n' << "b: " << b << '\n';
    int result = a / b * b + a % b;
    std::cout << "a / b * b + a \% b == " << result << '\n';
    std::cout << "equality test: "  << (a == result) << '\n';
    std::cout << "\n\n";
    std::cout << "Char to int conversion notes:\n";

    char c1 = 'x';
    int i1 = c1;
    int i2 = 'x';
    char c2 = i1;
    bool boolean = false;
    int i3 = boolean;
    char c3 = boolean;
    std::cout << "Char conversions:\n";
    std::cout << "'" << c1 << "'" << " to int: " << i1 << '\n';
    std::cout << "'" << i1 << "'" << " to char: " << c2 << '\n';
    std::cout << "Bool conversions:\n";
    std::cout << "bool " << boolean << " to int: " << i3 << '\n';
    std::cout << "bool " << boolean << " to char: " << c3 << '\n';
}
