#include <iostream>

int main()
{
    const int size = 5;
    int arr[size] = {1, 5, 4, 3, 7};
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    std::cout << "The sum of the array elements = " << sum << std::endl;
    
}