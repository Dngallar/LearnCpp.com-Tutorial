#include <iostream>

int sumDigits(int n)
{
    if(n < 10)
        return n;
    else
        return sumDigits(n/10) + (n%10);
}

int main()
{
    int x = sumDigits(93427);
    std::cout << x << '\n';
    return 0;
}
