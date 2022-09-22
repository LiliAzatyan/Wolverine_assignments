#include <iostream>

int main()
{
    int num1;
    int num2;
    std::cout << "Please input the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Please input the second number: " << std::endl;
    std::cin >> num2;
    if (num1 > num2)
    {
        std::cout << "The max value is = " << num1 << std::endl;
    }
    else 
    {
        std::cout << "The max value is = " << num2 << std::endl;
    }
}