#include "myMath.h"
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num1{};
    std::cin >> num1;

    std::cout << "Enter another integer: ";
    int num2{};
    std::cin >> num2;

    std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << '\n';
    std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << '\n';
    std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << '\n';
    std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << '\n';
    std::cout << "The greatest common denominator of " << num1 << " and "
        << num2 << " is " << gcd(num1, num2) << ".\n";

    return 0;
}