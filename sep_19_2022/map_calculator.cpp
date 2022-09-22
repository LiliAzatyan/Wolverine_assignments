#include <iostream>
#include <map>

int add(int num_1, int num_2);
int divi(int num_1, int num_2);
int sub(int num_1, int num_2);
int mul(int num_1, int num_2);
int percent(int num_1, int num_2);

int main()
{
    std::map<char, int(*)(int, int)> M;
    double num_1 = 0;
    double num_2 = 0;
    char op;
    std::cout << "Please enter the first number: ";
    std::cin >> num_1;
    std::cout << "Please enter the aritmethic operator: ";
    std::cin >> op;
    if (op == '%')
    {
        std::cout << "Please enter the percentage you want to know: ";
        std::cin >> num_2;
    }
    else
    {
        std::cout << "Please enter the second number: ";
        std::cin >> num_2;
    }
    M['-'] = &sub;
    M['/'] = &divi;
    M['*'] = &mul;
    M['+'] = &add;
    M['%'] = &percent;
    std::cout << "Result = " << M[op](num_1, num_2) << std::endl;

}

int add(int num_1, int num_2)
{
    return num_1 + num_2;
}
int divi(int num_1, int num_2)
{
    return num_1 / num_2;
}
int sub(int num_1, int num_2)
{
    return num_1 - num_2;
}
int mul(int num_1, int num_2)
{
    return num_1 * num_2;
}
int percent(int num_1, int num_2)
{
    return (num_1 * num_2) / 100;
}