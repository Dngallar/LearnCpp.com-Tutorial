#include <iostream>

int factorial(int n)
{
    if(n < 1)
        return 1;
    else
        return n*factorial(n - 1);
}

int main()
{
    int test = factorial(5);
    std::cout << test << '\n';
    return 0;
}
