#include <iostream>

int main()
{
    char chValue = 'a';
    while (chValue <= 'z')
    {
        std::cout << chValue << " " << static_cast<int>(chValue) << "\n";
        chValue++;
    }

    return 0;
}
