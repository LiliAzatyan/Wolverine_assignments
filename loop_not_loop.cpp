#include <iostream>

int main()
{
    int number_1;
    int number_2;
    std::cout << "Please input the first number: " << std::endl;
    std::cin >> number_1;
    std::cout << "Please input the second number: " << std::endl;
    std::cin >> number_2;
    label:
    if (number_1 <= number_2)
    {
        std::cout << number_1;
        ++number_1;
        goto label;
    }
}