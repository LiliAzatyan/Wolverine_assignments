#include <iostream>

int main()
{
    double num1;
    double num2;
    double num3;
    std::cout << "Please input the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Please input the second number: " << std::endl;
    std::cin >> num2;
    std::cout << "Please input the third number: " << std::endl;
    std::cin >> num3;
    std::cout << "The arithmetic mean of the numbers you entered = " << (num1 + num2 + num3) / 3 << std::endl;
}