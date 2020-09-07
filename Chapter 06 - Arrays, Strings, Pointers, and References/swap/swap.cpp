#include <iostream>

void swap(int *xPtr, int *yPtr)
{
    int temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = temp;
}

int main()
{
    std::cout << "Enter the first integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter the second integer: ";
    int y;
    std::cin >> y;

    std::cout << "The numbers are: x->" << x << " and y->" << y << '\n';

    swap(&x, &y);

    std::cout << "Swapping\n";
    std::cout << "The numbers are: x->" << x << " and y->" << y << '\n';

    return 0;
}
