#include <iostream>

int sumTo(int value)
{
    int sum {0};
    for(int i {0}; i <= value; ++i)
        sum += i;
    return sum;
}

int main()
{
    std::cout << "Enter a value: ";
    int value;
    std::cin >> value;
    std::cout << "The sum from 1 to " << value;
    std::cout << " is " << sumTo(value) << "\n";
    return 0;
}
